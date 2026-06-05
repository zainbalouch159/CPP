#include <iostream>
using namespace std;
class employee{
 int ID;
	static int count;
 public:
 
 void setData(){
 	cout<<"Enter the id"<<endl;
 	cin>>ID;
 	count++;
 }
 void getData(){
 	cout<<"The id of this employee is "<<ID<<" and this is employee number "<<count<<endl;
 
 }
 };
 int employee::count=0;
int main(){
employee zain, hassan, faizan;

zain.setData();
zain.getData();

hassan.setData();
hassan.getData();

faizan.setData();
faizan.getData();
return 0;
}

