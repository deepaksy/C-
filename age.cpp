#include<iostream>

int main(){
    std::cout<<"Voting Eligibiler"<<std::endl;
    int age;
    std::cout<<"Enter your age: "<<std::endl;
    std::cin>>age;
    age>=18?std::cout<<"You eligible for voting.":std::cout<<"you are not eligible for voting"<<std::endl;
    return 0;
}