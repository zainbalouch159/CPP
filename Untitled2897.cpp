 #include <iostream>
using namespace std;
class Employee
{
	private:
		int a, b, c;
		public:
			int d, e;
			void setData(int a, int b, int c);
			void getData(){
				cout<<"The value of a is "<<a<<endl;
				cout<<"The value of b is "<<b<<endl;
				cout<<"The value of c is "<<c<<endl;
				cout<<"The value of d is "<<d<<endl;
				cout<<"The value of e is "<<e<<endl;
			}
}
int main(){

return 0;
}

