#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass{
	T1 data1;
	T2 data2;
	public:
		myclass(T1 data1, T2 data2){
			this->data1=data1;
			this->data2=data2;
		}
		void display(void){
			cout<<data1<<endl<<data2;
		}
};
int main(){
myclass <float, string> obj(2.5,"Zain");
obj.display();
return 0;
}

