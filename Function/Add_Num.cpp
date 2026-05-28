#include <iostream>
using namespace std;
int addnumbers(int num1, int num2);
int main(){

int a,b;

cout<<"Enter number 1"<<endl;
cin>>a;
cout<<"Enter number 2"<<endl;
cin>>b;
int sum= addnumbers(a, b);
cout<<"The sum is "<<sum<<endl;
return 0;
}

int addnumbers(int a, int b){
	int addition=a+b;
	return addition;
}

