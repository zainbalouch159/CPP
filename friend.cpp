#include <iostream>
using namespace std;
class c2;
class c1{
	int val;
	public:
		void intdata(int a){
			val=a;
		}
		void display(void){
			cout<<val<<endl;
		}
		friend void exchange(c1 &, c2 &);
};
class c2{
	int val2;
	public:
		void intdata(int a){
			val2=a;
		}
		void display(void){
			cout<<val2<<endl;
		}
			friend void exchange(c1 &, c2 &);
};
void exchange(c1 &x, c2 &y){
	int tmp = x.val;
	x.val=y.val2;
	y.val2=tmp;
}
int main(){
c1 a;
c2 b;
a.intdata(4);
b.intdata(77);
exchange(a, b);
cout<<"The value of of a after exchange becomes: ";
a.display();
cout<<"The value of of b after exchange becomes: ";
b.display();
return 0;
}

