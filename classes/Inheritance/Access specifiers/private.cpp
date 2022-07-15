#include<iostream>
#include<string>
using namespace std;

class base{
    public:
        void greet(){
            cout<<"Greetings"<<endl;
        }
};

class derived:private base{
    public:
    void call(){
        greet();
    }
};

int main(){
    derived d;
    d.call();
    return 0;
}