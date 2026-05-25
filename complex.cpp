#include <iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		void setDAta(int v1, int v2){
			a=v1;
			b=v2;
		}
		void setDatabySum(complex o1, complex o2){
			a=o1.a+o2.a;
			b=o1.b+o2.b;
		}
		void printdata(){
			cout<<"Your complex number is "<<a<<" & "<<b<<"i"<<endl;
		}
};
int main(){
complex c1, c2, c3, c4;
c1.setDAta(3,4);
c1.printdata();
c2.setDAta(5,7);
c2.printdata();
c3.setDatabySum(c1,c2);
c3.printdata();
return 0;
}

