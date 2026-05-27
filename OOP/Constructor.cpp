#include <iostream>
using namespace std;
class Complex{
	int a, b;
	public:
		Complex(int, int);
		printnumber();
};
Complex ::printnumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
Complex ::Complex(int x, int y){
	a=x;
	b=y;

}

int main(){
	Complex c1(2,3), c2(5,7), c3(1,0);
	c1.printnumber();
	c2.printnumber();
	c3.printnumber();

return 0;
}

