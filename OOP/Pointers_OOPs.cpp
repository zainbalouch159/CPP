#include <iostream>
using namespace std;
class complex{
	int a,b,c,d,e;
	public:
			void setdata(int i,int r, int t, int w, int o){
		a=i;
			 b=r;
			 c=t;
			 d=w;
			 e=o;
		}
		void getdata(){
			cout<<"The real part is "<<a<<endl
				<<"The imaginary part is "<<b<<endl
				<<"The imaginary part is "<<c<<endl
				<<"The imaginary part is "<<d<<endl
				<<"The imaginary part is "<<e<<endl;
				
		}
	
};
int main(){
	
//complex a;
//complex *ptr=&a;
complex *ptr= new complex[4];
ptr->setdata(4,25,55,72,87);
ptr->getdata();
return 0;
}

