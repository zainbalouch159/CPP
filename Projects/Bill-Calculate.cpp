#include <iostream>
using namespace std;

int main(){
int units, bill;

cout<<"Enter units that you consumed"<<endl;
cin>>units;
if(units<=300){
	bill = units*2;
}
else if(units>300 && units<=500){
	bill = units*5;
}
else if(units>500){
	bill = units*7;
}
	bill = bill+150;
	if(bill>2000){
		bill = bill + (bill*0.05);
	}
cout<<"Your total bill is Rs "<<bill;

return 0;
}

