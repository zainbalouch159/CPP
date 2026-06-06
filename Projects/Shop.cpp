#include <iostream>
using namespace std;
class shop
{
	int itemID[100];
	int itemPrice[100];
	string itemname[100];
    int counter; 
    public:
    	int itemno;
    	void intitcounter() { counter=0; }
    	void setprice();
    	void displayprice();
    	void itemnoset();
};
void shop::itemnoset()
{
	cout<<"How many item do you want to enter?"<<endl;
	cin>>itemno;
	cout<<endl;
}
void shop::setprice()
{
	cout<<"Enter the name of item no "<<counter+1<<endl;
	cin>>itemname[counter];
	cout<<"Enter the ID of "<<itemname[counter]<<endl;
	cin>>itemID[counter];
	cout<<"Enter the price of "<<itemname[counter]<<endl;
	cout<<"Rs ";
	cin>>itemPrice[counter];
	cout<<endl;
	counter++;
}
void shop::displayprice()
{
	for(int i=0;i<counter;i++)
{
	cout<<"The ID of "<<itemname[i]<<" is "<<itemID[i]<<" and Price is Rs "<<itemPrice[i]<<endl;
}
}

int main(){
shop dukaan;
dukaan.intitcounter();
dukaan.itemnoset();
for(int i=0; i<dukaan.itemno; i++)
{
	dukaan.setprice();
}
dukaan.displayprice();
return 0;
}

