#include<iostream>
#include<string>
using namespace std;

class Area{
    public:
    void area(){
        cout<<"Hi this is area function.";
    }

    int area(int i){
        return 4*i;
    }
};

class Rectangle:public Area{
    public:
    double area(int i){
        return (double)i;
    }
    friend void area();
};

int main(){
    Rectangle rec;
    cout<<rec.area(12);
    rec.area();
    return 0;
}