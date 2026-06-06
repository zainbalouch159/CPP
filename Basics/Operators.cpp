#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    // Comparison Operators in C++
    // 0 = False & 1 = True
cout<<"a==b is "<<(a==b)<<"\n";
cout<<"!(a==b) is "<<!(a==b)<<"\n";
cout<<"a!=b is "<<(a!=b)<<"\n";
cout<<"a>b is "<<(a>b)<<"\n";
cout<<"a<b is "<<(a<b)<<"\n";
cout<<"a>=b is "<<(a>=b)<<"\n";
cout<<"a<=b is "<<(a<=b)<<"\n";
// Logical Operators in C++
cout<<"\n The value of this logical and operator ((a==b) && (a<=b)) is: "
<<((a==b) && (a<=b));
cout<<"\n The value of this logical or operator ((a!=b) || (a<b)) is: "
<<((a!=b) || (a<b));



    return 0;
}
