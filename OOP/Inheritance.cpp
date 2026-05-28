#include <iostream>
using namespace std;
class base{
	public:
		int var1;
	 virtual void display(){
			cout<<"Displaying Base class variable var1 "<<var1<<endl;
		}
};
class derived : public base{
		public:
		int var1der;
		void display(){
			cout<<"Displaying Derived class variable var1 "<<var1der<<endl;
		}
};
int main(){
base *ptr;
base a;
derived b;
ptr= &b;
ptr->var1=82;
//ptr->var1der=84;
ptr->display();
//derived *c;
//derived d;
//c= &d;
//c->var1der=94;
//c->display();
return 0;
}

