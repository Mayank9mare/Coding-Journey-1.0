#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;
    Student(){

    }
    Student(string s){
        name=s;
    }

    bool operator == (Student &a){
        if(name==a.name && age ==a.age && gender==a.gender){
            return true;
        }
        return false;

    }
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Student a[3];
    Student x("Mayank");
    a[0]=x;
    a[1]=x;
    if(a[0]==a[1])cout<<1;
}