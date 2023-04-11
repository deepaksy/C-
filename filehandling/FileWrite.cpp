#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream MyFile("notes.txt");

    MyFile<<"Hello World!";
    MyFile.close();
}