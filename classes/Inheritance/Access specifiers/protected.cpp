#include<iostream>
#include<string>
using namespace std;

class base{
    public:
     void greet(){
        cout<<"Greetings from base class"<<endl;
     }

};

class derived1:protected base{
    public:
        void callbasefunc(){
            greet();
        }
};

class derived2:public derived1{
    public:
        void call(){
            greet();
        }
};

int main(){
    derived1 d1;
    d1.callbasefunc();
}