#include<iostream>
#include<string>
using namespace std;
class Area{
    public: 
    virtual int area()=0;
};

class Rectangle:public Area{
    public: int area(){
        cout<<"Area";
        return 0;
    }
    public: int area(int i){
        return i*4;
    }
};

int main(){
    Rectangle rec;
    cout<<"Area of rectangle: "<<rec.area(23);
    return 0;
}