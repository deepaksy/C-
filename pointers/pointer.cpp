#include<iostream>
#include<string>
using namespace std;

int main(){
    int num=10;
    int *pointerToNum;
    pointerToNum=&num;
    cout<<*pointerToNum;
    return 0;
}