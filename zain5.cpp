#include <iostream>
using namespace std;
int c=76; // global variable
int main(){
int a , b, c, d=45; // local variable
cout<<"Enter value of a: ";
cin>>a;
cout<<"Enter value of b: ";
cin>>b;
c = (a+b);
cout<<"The sum of a and b is "<<c<<"\n";
cout<<"The local c is "<<c<<"\n";
cout<<"The global c is "<<::c<<"\n"; /* Global variable method :: necessary to use*/
cout<<"The value of d is "<<d;

// Demonstration of float, double, long double data types and sizeof() function

float f = 34.4f; // float variable by suffix f & F
double e = 67.890123456L; // double variable by suffix L & l
cout<<"\n\n\nThe size of 34.4"<<" is "<<sizeof(34.4)<<" bytes\n"; //"\n" = endl for new line
cout<<"The size of 34.4f is "<<sizeof(f)<<" bytes\n"; // sizeof() function is used to get size of variable or data type in bytes
cout<<"The size of 34.4F"<<" is "<<sizeof(34.4F)<<" bytes\n";
cout<<"The size of 34.4l"<<" is "<<sizeof(34.4l)<<" bytes\n";
cout<<"The size of 34.4L"<<" is "<<sizeof(34.4L)<<" bytes\n";

// Demonstration of reference variable

int x = 455;
int & y = x;
cout<<"\n\n\nThe value of x is "<<y<<"\n"; // reference variable y refers to x

// Demonstration of typecasting
float g = 45.67;
cout<<"\n\n\nThe value of g before typecasting is "<<g<<"\n";
cout<<"The value of g after typecasting is "<<(int)g<<"\n"; // typecasting float to int e.g int(g) & (int)g

    return 0;
}