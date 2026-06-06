#include <iostream>
using namespace std;
int sum(int, int);
void g();
int main() {
   int num1, num2;
   cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
   cout<<"The sum is: "<<sum(num1, num2)<<endl; // num1 and num2 are actual parameters
   g();
    return 0;
}
int sum(int a, int b){ // a and b are formal parameters
    // a and b will be taking values from actual parameters
    int c = a + b;
    return c;
}
void g(){
    cout<<"Hello from g function"<<endl;
}
