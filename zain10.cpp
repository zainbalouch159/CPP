#include <iostream>
using namespace std;

int main() {
    int y=8;
    int* n = &y; 
    // & is the address-of operator
 
    cout<<"The address of y is: "<<n<<endl;
    cout<<"The address of y is: "<<&y<<endl;
       // * is the dereference operator
    cout<<"The value of y is: "<<*n<<endl;
    int** u= &n;
    cout<<"The address of n is: "<<u<<endl;
    cout<<"The address of n is: "<<&n<<endl;
    cout<<"The value of n is: "<<*u<<endl;
    cout<<"The value of y using u is: "<<**u<<endl;
    return 0;
}