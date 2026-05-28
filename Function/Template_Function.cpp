#include <iostream>
using namespace std;
template <class T1, class T2>
float average(T1 a,T2 b){
	float avg=(a+b)/2;
	return avg;
}
template <class T>
void swapp(T &a, T &b){
	T temp=a;
	a=b;
	b=temp;	
}
int main(){
//	float a=average<int,int>(3,2);
//cout<<a;
int x=6, y=7;
swapp(x,y);
cout<<x<<endl<<y;
return 0;
}

