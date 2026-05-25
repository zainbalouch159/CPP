#include <iostream>
#include <string>
using namespace std;

int main(){
int acc_no=101;
string name="Muhammad Zain";
int balance=50000;
int choice, deposit, withdraw;

do{
	cout<<"\n---------------------------------------\n"
	<<"\n 1. Display account info \n"
    <<" 2. Deposit money \n"
    <<" 3. Withdraw money \n"
    <<" 4. Exit \n Press 1-4 to perform any action"<<endl;
cin>>choice;
cout<<"\n---------------------------------------\n\n";
	switch (choice)
	{
		case 1:
			cout<<" Your account info"
			    <<"\n Hello "<<name
			    <<"\n Your account no is "<<acc_no
			    <<"\n Your current balance is "<<balance<<endl; 
			    break;
			case 2:
				cout<<"\n Enter money you want to deposit"<<endl;
				cin>>deposit;
				balance += deposit;
				cout<<" You deposit "<<deposit
				    <<"\n Your current balance is "<<balance<<endl;
				     break;
				     case 3:
				     	cout<<" Enter amount you want to withdraw"<<endl;
				     	cin>>withdraw;
				     	balance -= withdraw;
				     	cout<<" You withdraw "<<withdraw
				     	    <<"\n Your total balance is "<<balance<<endl;	
				  break;
				  case 4:
				  cout<<" Program Finish"<<endl;
				  break;
				  default:
				  	cout<<" Please choice between (1-4)"<<endl;
				  	break;
			}
			}while(choice !=4);
 return 0;
}

