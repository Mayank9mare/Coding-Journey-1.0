#include<iostream>
using namespace std;
 //In C++, the constructor cannot be virtual, because when a constructor of a class is executed 
 //there is no virtual table in the memory, 
 //means no virtual pointer defined yet. So, the constructor should always be non-virtual.
class Person
{
    int id;
    char name[100];
   
    public:
        Person(){
            cout<<"Person constructor called"<<endl;
        }
        void set_p()
        {
            cout<<"Enter the Id:";
            cin>>id;
            fflush(stdin);
            cout<<"Enter the Name:";
            cin.get(name,100);
        }
   
        void display_p()
        {
            cout<<endl<<id<<"\t"<<name;
        }
        ~Person(){
            cout<<"Person destructor called"<<endl;
        }
};
 
class Student: private Person
{
    char course[50];
    int fee;
     
    public:
    Student(){
        cout<<"Student constructor called"<<endl;
    }
    void set_s()
        {
            set_p();
            cout<<"Enter the Course Name:";
            fflush(stdin);
            cin.getline(course,50);
            cout<<"Enter the Course Fee:";
            cin>>fee;
        }
         
        void display_s()
        {
            display_p();
            cout<<"\t"<<course<<"\t"<<fee;
        }
        ~Student(){
            cout<<"student destructor called"<<endl;
        }
};
 
main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}