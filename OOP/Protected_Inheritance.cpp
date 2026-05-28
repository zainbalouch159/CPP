#include <iostream>
using namespace std;
class base{
	protected:
	int a;
	private:
	int b;
};
class derived: public base{
	  
};
int main(){
base b;
derived d;
cout<<b.a;
return 0;
}

