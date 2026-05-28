#include <iostream>
#include <limits>
using namespace std;

int main(){
	string half, full;
cout<<"Isma ek lafz input hoga"<<endl;
cin>>half;
cout<<"Isma ma full name input hoga"<<endl;
//cin.ignore();
//cin.ignore(numeric_limits<streamsize>::max(), '\n');
getline(cin, full);
//cin>>full;
cout<<"Pehla ka input:"<<half<<endl;
cout<<"Dusra ka input:"<<full<<endl;
return 0;
}

