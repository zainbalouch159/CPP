#include <iostream>
using namespace std;
template <class T>
class zain{
	T data;
	public:
		zain(T data){
		this->data=data;
		}
	void display();
};
template <class T>
void zain<T>::display(){
			cout<<data;
		}
	template <class T>
 void fun(T a){
 	cout<<"I am templatised function "<<a;
 }
 void fun(int a){
 	cout<<"I am simple function "<<a;
 }
int main(){
//zain <string>z("Ma zain ho ");
//z.display();
fun<float>(87.782);
return 0;
}

