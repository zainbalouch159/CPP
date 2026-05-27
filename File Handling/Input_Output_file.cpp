#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream out;
out.open("sample.text");
out<<"This is me"<<endl
	<<"Ma zain ho ";
	out.close();
//	ifstream in("sample.text");
//	string st;
//	in.open("sample.text");
//	getline(in, st);
////	cout<<st<<endl;
//	getline(in, st1);
//	cout<<st<<endl<<st1;
//while(in.eof()==0){
//	getline(in,st);
//	cout<<st<<endl;
//}
//	in.close();
return 0;
}

