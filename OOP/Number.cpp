#include <iostream>
using namespace std;
class number{
	int a;
	public:
		void enternum();
		int assignvalue();
		void showvalue();
};
void number :: enternum()
{
	cout<<"Enter a number ";
	cin>>a;
}
int number :: assignvalue()
{
	a=2;
	return a;
}
void number :: showvalue()
{
	cout<<"The number is "<<a<<endl;
}
int main(){
number zain;
zain.enternum();
zain.assignvalue();
zain.showvalue();
return 0;
}

