#include <iostream>
using namespace std;
class demo{
	int a;
	public:
		int b,c,d;
		void getdata(){
			cout<<"Enter the value of a"<<endl;
			cin>>a;
		}
		void display(int m){
			cout<<"The value of a is "<<m<<endl;
		}
		demo operator+(demo m){
			demo n;
			n.a=a+m.a;
			return n;
		}
};
int main(){
demo zain,saad,total;
//zain.getdata();
//saad.getdata();
//demo total=zain*saad;
//total.display();
zain.b=25;
saad.b=24;
total.b=zain.b+saad.b;
//cout<<total.b
total.display(total.b);
return 0;
}

