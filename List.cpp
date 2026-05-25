#include <iostream>
#include <list>
using namespace std;
void display(list<int> & lst){
	list<int>::iterator it;
	for(it=lst.begin();it!=lst.end();it++){
		cout<<*it<<",";
	}
}
int main(){
list<int> list1;
list<int> list2(4);
list1.push_back(5);
list1.push_back(9634);
list1.push_back(8);
list1.push_back(2);
list1.remove(9);
//list1.pop_back();
//list1.pop_front();

//list<int> :: iterator iter;
//iter=list1.begin();
//cout<<*iter<<",";
//iter++;
//cout<<*iter<<",";
//display(list1);
list<int>::iterator iter1;
iter1=list2.begin();
*iter1=45;
iter1++;
*iter1=52;
iter1++;
*iter1=25;
iter1++;
*iter1=981;
//list1.sort()l
list1.sort();
//list2.sort();
//list1.merge(list2);
list1.reverse();
display(list1);
//
//display(list2);
return 0;
}

