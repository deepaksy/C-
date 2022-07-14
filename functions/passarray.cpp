#include<iostream>
#include<string>
using namespace std;
void printarrayof5(int arr[5]){
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int num[]={1,2,3,4,5};
    printarrayof5(num);
    return 0;
}