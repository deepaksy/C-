#include<iostream>
using namespace std;
int main(){
    char grade='A';
    switch (grade)
    {
    case 'A':
        cout<<"Excellent"<<endl;
        break;
    
    default:
        cout<<"Failed"<<endl;
        break;
    }
    return 0;
}