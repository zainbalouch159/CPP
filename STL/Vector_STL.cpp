#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T>&v){
for(int i=0; i<v.size();i++){
	cout<<v[i]<<",";
}
cout<<endl;	
}
int main(){
vector<int> vec1;
vector<char> vec2(4,'Z');
vector<char> vec3(vec2);
vector<int> vec4(6,3);
display(vec3);
int ele, size;
//cout<<"Enter the size of your vector"<<endl;
//cin>>size;
//	cout<<"<--------------------------------------->"<<endl;
//for(int i=0; i<size; i++){
//	cout<<"Enter an element to add to this vector"<<endl;
//	cin>>ele;
//	vec1.push_back(ele);
//}
//vec1.pop_back();
//display(vec1);
//vector<int>::iterator iter=vec1.begin();
//vec1.insert(iter+1,500, 589);
//display(vec1);
//vec1.push_back("Zain ho ma");
//cout<<vec1[0];
//cout<<vec1[0];
return 0;
}

