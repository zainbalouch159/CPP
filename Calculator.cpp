#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator{
	protected:
	int num1, num2;
	public:
		void set_num(int a, int b){
		
			num1=a;
			num2=b;
		}
		void display_num(void){
			cout<<"\n<-------------Simeple Calculator-------------------->\n"<<endl
				<<"The number 1 is "<<num1<<endl
			    <<"The number 2 is "<<num2<<endl
			    <<"The sum of these number is "<<num1+num2<<endl
			    <<"The minus of these number is "<<num1-num2<<endl
			    <<"The product of these number is "<<num1*num2<<endl
			    <<"The division of these number is "<<num1/num2<<endl;
		}
};
class ScientificCalculator:virtual public SimpleCalculator{
	public:
		void display_num_scientific(){
				cout<<"\n<-------------Scientific Calculator-------------------->\n"<<endl
				<<"The number 1 is "<<num1<<endl
			    <<"The number 2 is "<<num2<<endl
			    <<"If "<<num2<<" is power of "<<num1<<" = "<<pow(num1,num2)<<endl
			    <<"The squareroot of "<<num1<<" is "<<sqrt(num1)<<endl
			    <<"The squareroot of "<<num2<<" is "<<sqrt(num2)<<endl
			    <<"The log of "<<num1<<" is "<<log(num1)<<endl
			    <<"The log of "<<num2<<" is "<<log(num2)<<endl;
		}
};
class HybridCalculator: public ScientificCalculator,virtual SimpleCalculator{
	
};
int main(){
	int a, b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
HybridCalculator zain;
zain.set_num(a,b);
zain.display_num();
zain.display_num_scientific();
return 0;
}

