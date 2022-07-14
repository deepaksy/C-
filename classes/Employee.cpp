#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    int id;
    char name[50];
    public:
    
    void getData(){
        cout<<"Enter Id: "<<endl;
        cin>>id;
        cout<<"Enter Name: "<<endl;
        cin>>name;
    }

    void display(){
        cout<<"ID: "<<id<<"\nName: "<<name<<endl;
    }
};

int main(){
    Employee emp1, emp2;
    emp1.getData();
    emp1.display();
    return 0;
}