#include<iostream>
#include<string>
using namespace std;
void swap(int &x,int &y);
int main(){
    int i=1,j=2;
    cout<<"Before swap: i= "<<i<<" j= "<<j<<endl;
    swap(i,j);
    cout<<"After swap: i= "<<i<<" j= "<<j<<endl;

}

void swap(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}