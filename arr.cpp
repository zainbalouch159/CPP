#include <iostream>
using namespace std;

int main(){
int size;
cout<<"How many data you want to enter"<<endl;
cin>>size;
int arr[size];
for(int i=0; i<size; i++){
	cout<<"Enter data "<<i<<endl;
	cin>>arr[i];
}
for(int i=0; i<size; i++){
	cout<<"Data "<<i<<" = "<<arr[i]<<endl;
}
return 0;
}

