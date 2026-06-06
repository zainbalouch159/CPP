#include <iostream>
using namespace std;
class base{
	int data;
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};
void base::setdata(){
	data=23;
	data2=22;
}
int base::getdata1(){
	return data;
}
int base::getdata2(){
	return data2;
}
class derived:  base{
	int data3;
	public:
		void process();
		void display();
		
};
void derived::process(){
	setdata();
	data3=data2*getdata1();
}
void derived:: display(){
	cout<<"Value of data 1 is "<<getdata1()<<endl;
	cout<<"Value of data 2 is "<<data2<<endl;
	cout<<"Value o f data 3 is "<<data3<<endl;
}
int main(){
derived zain;
//zain.setdata();
zain.process();
zain.display();
return 0;
}

