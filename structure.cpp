#include <iostream>
using namespace std;
//typedef struct employee
//{ 
//int ID;
//char favChar;
//int salary;
//} ep;
union money
{
	int rice;
	char car;
	float pounds;
};
int main(){
	enum Meal{breakfast, lunch, dinner};
	Meal m1 = lunch;
	cout<<m1;
//	cout<<breakfast;
//	cout<<lunch;
//	cout<<dinner;
//ep harry;
//harry.ID = 1;
//harry.favChar = 'c';
//harry.salary= 120000000;
//cout<<"The Harry ID is "<<harry.ID<<endl;
//cout<<"The Harry favChar is "<<harry.favChar<<endl;
//cout<<"The Harry salary is "<<harry.salary<<endl;
//union money m1;
//m1.rice=32;
//m1.car='c';
//m1.pounds=25;
//cout<<m1.car<<endl;
//cout<<m1.pounds<<endl;
//cout<<m1.pounds<<endl;
return 0;
}

