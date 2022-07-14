#include<iostream>
#include<string>
using namespace std;
void greet(string name="Deepak");
int main(){
    greet();
    return 0;
}

void greet(string name){
    cout<<"Hello "<<name<<endl;
}