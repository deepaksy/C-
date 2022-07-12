#include<iostream>
using namespace std;
 class student{
    public:
    student(){
        cout<<"Constructor called"<<endl;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
        greet();
    }

    void greet(){
        cout<<"Hello world";
    }
};


