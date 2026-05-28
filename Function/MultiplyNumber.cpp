#include <iostream>
using namespace std;
int multiplynumbers(int num1, int num2);
int main(){
	int a,b;
	cout<<"Enter a number 1 "<<endl;
	cin>>a;
	cout<<"Enter a number 2 "<<endl;
	cin>>b;
	int rezult=multiplynumbers(a, b);

	cout<<"The the Product of this numbers is "<<rezult<<endl;
		return 0;
	}
int	multiplynumbers(int a, int b){
int	rezult= a*b;
	return rezult;
		
	}

