#include<iostream>
#include<string>
using namespace std;
int main(){
    string food = "Pizza";
    string &meal = food;
    cout<<food<<endl;
    cout<<meal<<endl;
    cout<<"&food: "<<&food<<endl;
    cout<<"&meal: "<<&meal<<endl;
    return 0;
}