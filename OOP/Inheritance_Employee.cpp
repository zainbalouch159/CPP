#include <iostream>
using namespace std;
class employee{
	public:
			int id;
			float salary;
		employee(int inpID){
			id=inpID;
			salary=34.0;
		}
		employee(){
			cout<<"Default constructor call"<<endl;
		}
};
class programmer :public employee{
	public:
	int language =9;
	programmer(int inp){
		id=inp;
	}
};
int main(){
employee zain(2), rehan(3);
cout<<zain.salary<<endl<<rehan.salary<<endl;
programmer hamza(23);
cout<<hamza.id;
return 0;
}

