#include <iostream>
using namespace std;
class base1{
	protected:
	int base1;
	public:
		void set_base_value(int r){
			base1=r;
		}
};
class base2{
	protected:
	int base2;
	public:
		void set_base_2_value(int p){
			base2=p;
		}
};
class derived: public base1, public base2{
	public:
		void display(){
			cout<<"The value of base 1 is "<<base1<<endl;
			cout<<"The value of base 2 is "<<base2<<endl;
			cout<<"The sum of these value is "<<base1+base2<<endl;
			cout<<"The product of these value is "<<base1*base2<<endl;
		}
};
int main(){
derived z;
z.set_base_value(2);
z.set_base_2_value(5);
z.display();
return 0;
}

