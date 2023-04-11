#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string myText;
    ifstream MyReadFile("notes.txt");

    while(getline(MyReadFile,myText)){
        cout<<myText;
    }
    MyReadFile.close();
    return 0;
}