#include<iostream>
#include<string>
using namespace std;
class A{
    int x;
    public:
    A(){
        x=10;
    }
    friend class B;
};

class B{
    public:
    void display(A &t){
        cout<<"The value of x="<<t.x<<endl;
    }
};

int main(){
    A _a;
    B _b;
    _b.display(_a);
    return 0;
}