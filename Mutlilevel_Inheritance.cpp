#include <iostream>
using namespace std;
class student{
	protected:
		int roll_number;
		public:
			void set_roll(int);
			void get_roll(void);
};
void student::set_roll(int r){
	roll_number=r;
}
void student::get_roll(){
	cout<<"The roll number is "<<roll_number<<endl;
}
class exam:public student{
	int marks;
	protected:
		float math, physics;
	public:
		void set_marks(float, float);
		void get_marks(void);	
};
void exam::set_marks(float a, float b){
	math=a;
	physics=b;
}
void exam::get_marks(){
	cout<<"The obtain marks in maths are: "<<math<<endl;
	cout<<"The obain marks in physics are: "<<physics<<endl;
}
class result :public exam{
	float percentage;
	public:
		void display(void);	
};
void result ::display(void){
	get_roll();
	get_marks();
	cout<<"Your percentage is "<<(math+physics)/2<<endl;
}
int main(){
result harry;
harry.set_roll(81);
harry.set_marks(94,97);
harry.display();
return 0;
}

