#include <iostream>
using namespace std;
int main(){
	int n;
	int fact =0;
	cout<<" Enter a number: ";
	cin>>n;
	if(n<0){
		cout<<"Negative Numbers not allowed";
	}
	else{
		for(int i=1; i<=n; i++){
			fact = fact+i;
		}
	}
	cout<<"Sum of "<<n<<" is "<<fact;	
}
