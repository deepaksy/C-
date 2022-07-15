#include<iostream>
#include<string>
using namespace std;
class myClass{
    public:
        void myfun(){
            cout<<"base func"<<endl;
        }
};


class anotherbaseclass{
    public:
        void anotherfun(){
            cout<<"another base func"<<endl;
        }
};

class Derived:public myClass,public anotherbaseclass{

};

int main(){
    Derived d;
    d.myfun();
    d.anotherfun();
    return 0;
}