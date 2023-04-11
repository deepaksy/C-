#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
     void speak(){
        cout<<"moo"<<endl;
     }
};

class Pig:public Animal{
    public:
        void speak(){
            cout<<"Oink Oink!"<<endl;
        }
};

class Dog:public Animal{
    public:
     void speak(){
        cout<<"OOf OOf!"<<endl;
     }
};

int main(){
    Pig p;
    Dog d;
    d.speak();
    p.speak();
    return 0;
}