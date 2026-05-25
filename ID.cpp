 #include <iostream>
using namespace std;
class Employee{
	int id;
	int salary;
	public:
		void setID(){
			cout<<"Enter the ID"<<endl;
			cin>>id;
		}
		void displayID(){
			cout<<"The ID of this Employee is "<<id<<endl;
		}
};

int main(){
Employee FB[4];
for(int i=0;i<4;i++){
	FB[i].setID();
	FB[i].displayID();
}
return 0;
}

