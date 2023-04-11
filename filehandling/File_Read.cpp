#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string text;

    //Read text from file
    ifstream file("file.txt");

    while (getline(file,text))
    {
        cout<<text;
    }
    file.close();
    return 0;
}