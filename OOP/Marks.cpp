#include <iostream>
using namespace std;
class marks{
	float mark[2];
	float average, obtain_marks;
	int total=300;
	char grade;
	int percentage;
	public:
		marks(float a, float b, float c);
		marks();
		~marks();
		void display();
};
marks ::marks(float a, float b, float c){
	mark[0]=a,
	mark[1]=b;
	mark[2]=c;
	obtain_marks=mark[0]+mark[1]+mark[2];
	average=obtain_marks/3;
	percentage=obtain_marks/total*100;
	if(average>90){
		grade='A';
	}
	else if(average>80){
		grade='B';
	}
	else if(average>70){
		grade='C';
	}
	else if(average>50){
		grade='D';
	}
	else{
		grade='F';
	}
	}
marks ::marks(){
		mark[0]=0;
		mark[1]=0;
		mark[2]=0;
	obtain_marks=mark[0]+mark[1]+mark[2];
	average=obtain_marks/3;
	percentage=obtain_marks/total*100;
	if(average>90){
		grade='A';
	}
	else if(average>80){
		grade='B';
	}
	else if(average>70){
		grade='C';
	}
	else if(average>50){
		grade='D';
	}
	else{
		grade='F';
	}
}
	marks ::~marks(){
		cout<<"Distuctor call"<<endl;
	}

void marks ::display(){
	cout<<"Obtain Marks: "<<obtain_marks<<endl
	    <<"Average: "<<average<<endl
	    <<"Grade: "<<grade<<endl
	    <<"Percentage: "<<percentage<<endl;
}
int main(){
	int a,b,c;
	cout<<"Enter your marks of 3 subjects"<<endl;
	cin>>a>>b>>c;
marks zain(a,b,c), saad;
zain.display();
saad.display();
return 0;
}

