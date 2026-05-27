#include <iostream>
#include <fstream>
using namespace std;

int main(){
//	string st;
//	cout<<"Enter your name"<<endl;
//	getline(cin, st);
//ofstream zain("sample.text");
//zain<<"My name is "+st;
//zain.close();
ifstream zaink("sample.text");
string content;
getline(zaink, content);
zaink.close();
cout<<"The content of this file is: "<<content;
//zain<<"Ma zain ho";
//zain>>st;
//getline(zain, st);
//cout<<st;
return 0;
}

