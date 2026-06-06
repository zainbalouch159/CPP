#include <iostream>
using namespace std;
int add(int a, int b){
	cout<<"Using function with 2 argument"<<endl;
	return a+b;
}
int add(int a, int b, int c){
	cout<<"Using function with 3 argument"<<endl;
	return a+b+c;
}
int main(){
cout<<"The sum of 4 and 6 is "<<add(4,6)<<endl;
cout<<"The sum of 4, 6 and 7 is "<<add(4,6,7)<<endl;
return 0;
}
