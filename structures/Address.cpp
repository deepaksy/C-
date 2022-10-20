#include<iostream>
#include<string>
using namespace std;

int main(){
    typedef struct address{
        int pincode;
        string street;
        string landmark;
    };
    address add;
    add.street="B61, Drilling camp";
    add.landmark="Near Masjid";
    add.pincode=495677;
    cout<<"add: "<<add.street<<endl<<add.landmark<<endl<<add.pincode<<endl;
    return 0;
}