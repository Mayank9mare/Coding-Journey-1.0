#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> v;
void merge(vector<int> &a,int l,int r,int m){
    //vector<int> v;
    v.clear();
    int i=l;
    int j=m+1;
    while(i<=m && j<=r){
        if(a[i]<=a[j]){
            v.push_back(a[i++]);
        }
        else{
            v.push_back(a[j++]);
        }
    }
    while(i<=m){
        v.push_back(a[i++]);
    }
    while(j<=r){
        v.push_back(a[j++]);
    }
    i=0;
    for(int i1=l;i1<=r;i1++){
        a[i1]=v[i++];
    }
    return;

}
void merge_sort(vector<int> &a,int l,int r){
    if(l<r){
        int m=(l+r)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,r,m);
    }
}
int main(){
    vector<int> a={7,5,3,1};
    merge_sort(a,0,3);
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
}