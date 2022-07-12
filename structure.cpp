#include<iostream> //It contains info that useful for program
#include<string.h>
using namespace std; // Tells the compiler to use std namespace.

int main(int argc, char const *argv[])
{
    char name[100],*ptr;
    if(argv!=NULL){
        for(int i=1;i<argc;++i){

            strcpy(name,argv[1]);
            cout<<"Hello "<<name<<endl;
            ptr=strstr(name,"name=")!=NULL?strstr(name,"name="):NULL;
            if(ptr==NULL){
                cout<<"Require argument to be passed!";
            }
            else{
                cout<<ptr+5;
            }
            cout<<ptr;
        }
    }
    return 0;
}
