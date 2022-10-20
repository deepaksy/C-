#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    void animalSound(){
        cout<<"The animal makes a sound"<<endl;
    }
};

class Pig:private Animal{
    public:
    void call(){
        animalSound();
    }
};

int main(){
    Pig p;
    // p.animalSound();
    p.call();
    return 0;
}