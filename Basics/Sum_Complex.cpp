#include <iostream>
using namespace std;
class complex{
	int a, b;
	public:
		void setnumber(int n1, int n2){
			a=n1;
		    b=n2;
		}
		void printdata(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
			friend complex sumcomplex(complex o1, complex o2);
};
complex sumcomplex(complex o1, complex o2){
	complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main(){
complex a1,a2,sum;
a1.setnumber(3,4);
a1.printdata();
a2.setnumber(7,9);
a2.printdata();
sum = sumcomplex(a1, a2);
sum.printdata();
return 0;
}

