#include<iostream>
#include<string>
using namespace std;
// BY default all member of a class are private if don't specify an access specifier.
class Myclass{
    /*
    1. public - Members are accessible from outside the class.
    2. private - Members cannot be accessed from outside the class.
    3. protected - Members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
    */
   public:
    int x;
   private:
    int y;
};


int main(){
    Myclass myObj;
    myObj.x=25; //Allowed
    //myObj.y=34; //  Not allowed
}