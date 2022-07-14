#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    int id;
    char name[50];
    public:
    void getData();
    void display();
};

void Employee::getData(){
    cout<<"Enter Id: "<<endl;
    cin>>id;
    cout<<"Enter Name: "<<endl;
    cin>>name;
}

void Employee::display(){
    cout<<"ID: "<<id<<"\nName: "<<name<<endl;
}

int main()
{
Employee emp1,emp2;

//emp1.id=101; error: ‘int Employee::id’ is private within this context
//strcpy(emp1.name,"Ram");
//As data members are hidden , using abstraction with public methods

emp1.getData();
emp1.display();

emp2.getData();
emp2.display();

return 0;
}