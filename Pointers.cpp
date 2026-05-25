#include <iostream>
using namespace std;
class item{
	int id;
	float price;
	public:
		void set_item(){
			cout<<"Enter the ID"<<endl;
			cin>>id;
			cout<<"Enter the Price"<<endl;
			cin>>price;
		}
		void get_item(){
			cout<<"ID of this item is "<<id<<endl
				<<"Price of this item is "<<price<<endl;
		}
};
int main(){
int size;
cout<<"How many items you want to enter"<<endl;
cin>>size;
item *p =  new item[size];
item *temp=p;
int a,b,c;
for(a=0;a<size;a++){
	p->set_item();
	p++;
}
for(a=0; a<size;a++){
	temp->get_item();
	temp++;
}
return 0;
}

