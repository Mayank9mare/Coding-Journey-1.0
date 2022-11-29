#include<bits/stdc++.h>
using namespace std;

class Base{
    int x=4;
    public:
        int y=5;
        Base(){
            y=1;
            x=1;
        }
        virtual void print(){
            cout<<x<<" "<<y<<endl;
        }
};

class Derived: public Base{
    public:
    int z=10;
    Derived(){
        y=0;
        z=0;
    }
    void print(){
        cout<<y<<" "<<z<<endl;
    }

};

int main(){
    Derived d=Derived();
    Base *b=&d;
    b->print();
}