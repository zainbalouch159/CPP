#include <iostream>
#include<string>
using namespace std;

int main(){
int max=10;
int id[max];
string name[max];
double salary[max];
double bonus[max];
double total_salary[max];
int num=0;
int choice;
do{
	cout<<"\n--------------------------------\n\n"
	    <<"1. Add employee details.\n"
	    <<"2. Display employee details.\n"
	    <<"3. Calculate the total salary.\n"
	    <<"4. Exit the program."
	    <<"Choice between(1-4)"<<endl;
	    cin>>choice;
	  cout<<"\n--------------------------------\n\n";
	    switch (choice){
	    	case 1:
	    	if(num>max){
	    		cout<<"List is full."<<endl;
			}
			else{
				cout<<"Enter employee ID: ";
				cin>>id[num];
				cout<<"Enter employee Name: ";
				cin>>name[num];
				cout<<"Enter employee Salary: ";
				cin>>salary[num];
				cout<<"Enter employee bonus: ";
				cin>>bonus[num];
				total_salary[num]=salary[num]+bonus[num];
				num++;
			}
				break;
				case 2:
					if(num==0){
						cout<<"No employee data"<<endl;
					}
					else{
						cout<<"ID  Name Salary Bonus Total Salary\n";
						for(int i=0; i<num; i++){
							
							   cout<<id[i]<<" |"<<name[i]<<" |"<<salary[i]<<" |"<<bonus[i]<<" |"<<total_salary[i]<<endl;   
						}
					}
					break;
				
					
				
			}
		}while(choice!=4);
		cout<<"\n--------------------------------\n";
return 0;
}

