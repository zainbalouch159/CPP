#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
map<string, vector<int> > marks;
vector<int> v={252,52,15,125};
vector<int>:: iterator it;
it=v.begin();
it=it+2;
//cout<<*it<<endl;
//it=it-1;
//cout<<*it<<endl;
////it--;
//cout<<*it;
marks["Zain"]={52,62,62};
marks["Waliullah"]={98,89,48,89,97,28};
marks["Hamza"]={89,58,79};
cout<<v.max_size()<<endl;
cout<<marks.max_size();
//map<string, vector<int> >:: iterator itr;
//for(auto x:marks){
//	cout<<x.first<<" "<<x.second<<endl;
//	cout<<(*itr).first<<"|";
//	for(int m: itr->second){
//		cout<<m<<" ";
//	}
//}
//auto z;
//cin>>z;
//cout<<z;
return 0;
}

