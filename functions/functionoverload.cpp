#include<iostream>
#include<string>
int area();
int area(int x);
int area(int x, int y);
int main(){
    std::cout<<area()<<std::endl;
    std::cout<<area(3,4);
    return 0;
}


int area(){
    return 0;
}
int area(int x){
    return x*1;
}

int area(int x,int y){
    return x*y;
}