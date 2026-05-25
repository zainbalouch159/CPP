#include <iostream>
using namespace std;
template <class T1=int, class T2=float, class T3=char>
class Zain{
	T1 a;
	T2 b;
	T3 c;
	public:
		Zain(T1 a, T2 b, T3 c){
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void diplay(){
			cout<<"The value of a is "<<a<<endl
				<<"The value of b is "<<b<<endl
				<<"The value of c is "<<c<<endl;
		}
};
int main(){
Zain <float,char,string>ma(4.9,'f',"Zain ho ma");
ma.diplay();
return 0;
}

