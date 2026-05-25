#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Kitna subject ka marks enter krna hai?"<<endl;
    cin>>n;
    int* marks=new int[n];
    for(int i=0; i<n; i++){
        cout<<i+1<<" subject ka marks enter kro"<<endl;
        cin>>marks[i];
    }
    for(int i=0; i<n; i++){
        cout<<i+1<<" subject ka marks hai "<<marks[i]<<endl;
    }
   delete marks; 
}