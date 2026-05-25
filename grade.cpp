#include <iostream>
using namespace std;

int main(){
int marks;
char grade;
cout<<"Enter your marks"<<endl;
cin>>marks;
if(marks>=85){
	grade='A';
}
else if(marks>=80){
	grade='B';
}
else if(marks>=70){
	grade='C';
}
else if(marks>=60){
	grade='D';
}
else if(marks<50){
	grade='F';
}
cout<<"You got "<<grade<<" grade.";
return 0;
}

