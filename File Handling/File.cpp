#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
ofstream filei;
filei.open("data.txt",ios::app);
filei<<"Hello kaha ho";
//file.open("OOPs.txt");
filei.close();
//ifstream file;
//file.open("data.txt");
//string name;
//while(file>>name){
//	cout<<name<<" ";
//}
//file.close();
return 0;
}

