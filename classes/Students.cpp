#include <iostream>
#include<string.h>
using namespace std;



class Student{
int sid;
char name[30];
int age;

public:
Student()
{
cout<<"Default constructor called"<<endl;
sid=0;
strcpy(name,"Undefined");
age=0;
}

Student(int sid,char *nm,int age);

void getdata();
void display();
};



//Parameterized constructor
//String is immutable char name[]="ram" ==> constant
Student::Student(int id,char *nm,int a)
{
cout<<"Parameterized constructor called"<<endl;
sid=id;
strcpy(name,nm);
age=a;
}




void Student::getdata()
{
cout<<"Enter name ,sid and age"<<endl;
cin>>name>>sid>>age;
}



void Student::display()
{
cout<<"Name "<<name<<" Sid "<<sid<<" Age is "<<age<<endl;
}
int main()
{
Student obj;

obj.getdata();
obj.display();

Student obj2(102,"Rahul",31);
obj2.display();

return 0;
}