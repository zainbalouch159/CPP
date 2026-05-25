#include <iostream>
using namespace std;
class A{
	int a;
	public:
		void set_data(int a){
			this->a =a;
			
		}
		void get_data(){
			cout<<"The value of a is "<<a<<endl;
		}
};
int main(){
int a;
cout<<"Enter the value of a is "<<endl;
cin>>a;
A zain;
zain.set_data(a);
zain.get_data();
return 0;
}

