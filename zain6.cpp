#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    // Demonstration of setw() manipulator from <iomanip> header file

     int a=10, c=100;
     cout << "The value of a without setw is: " << a << endl;
    cout << "The value of c without setw is: " << c << endl;
    cout << "The value of a is: " <<setw(10)<< a << endl; //setw() is used to give space before value
    cout << "The value of c is: " <<setw(10)<< c << endl;
    
    // Operator precedence demonstration

    int x = 5, y = 10, z = 15;
    int result = x + y * z; // Multiplication has higher precedence than addition
    return 0;
}