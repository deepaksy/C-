#include<iostream>
#include<string>
using namespace std;

class myClass{
    public:
        void myFunction(){
            cout<<"Some content in parent class.";
        }
};

class myChild:public myClass{

};

class myGrandChild:public myChild{

};

int main(){
    myGrandChild mgc;
    mgc.myFunction();
    return 0;
}