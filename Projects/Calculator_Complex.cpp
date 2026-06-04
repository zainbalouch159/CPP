#include <iostream>
using namespace std;
class Complex;
class calculator{
	public:
		int add(int a, int b)
	{
		return (a+b);
	}
	int sumRealComplex(Complex, Complex);
	int sumCompcomplex(Complex, Complex);
};
class Complex{
	int a, b;
//	friend int calculator::sumRealComplex(Complex, Complex);
//	friend int calculator::sumCompcomplex(Complex, Complex);
friend class calculator;
	public:
		void setNumber(int n1, int n2){
	        a=n1;
			b=n2;
		}
		void printNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
int calculator::sumRealComplex(Complex o1, Complex o2){
	return(o1.a+o2.a);
}
int calculator::sumCompcomplex(Complex o1, Complex o2){
	return(o1.b+o2.b);
}
int main(){
Complex o1, o2;
o1.setNumber(3,4);
o1.printNumber();
o2.setNumber(7,9);
o2.printNumber();
calculator calc, iota;
int res=calc.sumRealComplex(o1,o2);
int com=iota.sumCompcomplex(o1,o2);
cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
cout<<"The sum of imaginary part of o1 and o2 is "<<com<<"i"<<endl;

return 0;
}

