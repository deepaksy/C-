#include<iostream>
#include<string>
using namespace std;

class Functions{
    public:
        void greet();
};

void Functions::greet(){
    cout<<"Greetings!"<<endl;
}

int main(){
    Functions f;
    f.greet();
    return 0;
}