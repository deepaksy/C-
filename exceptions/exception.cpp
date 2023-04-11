#include<iostream>
#include<exception>
using namespace std;

int main(){
    int age=15;
    try{
        if(age>=18){
            cout<<"Access granted -  you are old enough.";
        }
        else{
            throw(age);
        }
    }catch( int n){
        cout<<"Access Denied! - You must be atleast 18 years old!.\n";
        cout<<"Your age is: "<<n;
    }
}