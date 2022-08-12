#include<bits/stdc++.h>
using namespace std;
 class Node{
        public:
        int key;
        int val;
        Node* prev;
        Node* next;
        Node(int _key,int _val){
            key=_key;
            val=_val;
        }

};
class LRUCache{
    public:
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    int capacity;
    unordered_map<int,Node*> m;

    LRUCache(int cap){
        capacity=cap;
        head->next=tail;
        tail->prev=head;
    }
    void add(int k,int v){
        Node* p=new Node(k,v);
        addNode(p);
        m[k]=head->next;
    }
    void addNode(Node* newNode){
        Node* temp=head->next;
        newNode->next=temp;
        newNode->prev=head;
        head->next=newNode;
        temp->prev=newNode;

    }
    void deleteNode(Node* delNode){
        Node* delprev=delNode->prev;
        Node* delNext=delNode->next;
        delprev->next=delNext;
        delNext->prev=delprev;
        delete delNode;

    }

    int get(int k){
        if(m.find(k)!=m.end()){
            Node* res=m[k];
            m.erase(k);
            int v=res->val;
            deleteNode(res);
            addNode(res);
            m[k]=head->next;
            return v;
        }
        return -1;
    }

    void put(int k,int v){
        if(m.find(k)!=m.end()){
            Node* existingNode=m[k];
            m.erase(k);
            deleteNode(existingNode);
        }
        if(m.size()==capacity){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);

        }
        addNode(new Node(k,v));
        m[k]=head->next;
    }
   

};

int main(){
    LRUCache p(10);
    p.put(1,23);
    p.put(2,22);
    p.put(4,43);
    cout<<p.get(2)<<endl;

}