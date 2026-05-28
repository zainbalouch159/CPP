#include <iostream>
using namespace std;
float moneyreceive(int currentMoney, float fact =1.04){
	return currentMoney*fact;
}
int main(){
	int money;
	cout<<"Enter money amount"<<endl;
	cin>>money;
	cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceive(money)<<" Rs after 1 year"<<endl;
		cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceive(money, 1.1)<<" Rs after 1 year"<<endl;

},
