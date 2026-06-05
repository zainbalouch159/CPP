#include <iostream>
#include <algorithm>
#include <functional>
//#include <string>
using namespace std;

int main(){
//	string z ="zina";
int arr[]={23,52,262,62,26,225,5};
sort(arr,arr+7, greater<int>() );
//cout<<*max_element(arr,arr+7)<<endl;
for(int m:arr){
	cout<<m<<endl;
}
return 0;
}

