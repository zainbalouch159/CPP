#include <iostream>
using namespace std;
class number{
	int num;
	public:
			number(){
			num=0;
		}
		number(int a){
			num=a;
		}
	
//			number(number &obj){
//			cout<<"Coppy constructor called"<<endl;
//			num=obj.num;
//		}
		void display(){
			cout<<"It contain this number "<<num<<endl;
		}
	
};
int main(){
number a,b(4),c(a);
a.display();
b.display();
c.display();
return 0;
}

