#include <iostream>
using namespace std;

int main() {
    int subject;
    cout<<"Kitna subject ka marks enter krna hai?"<<endl;
    cin>>subject;
    float* marks=new float[subject];
    for (int i = 0; i < subject; i++)
    {
        cout<<"Enter mark of subject "<<i+1<<endl;
        cin>>marks[i];
    }
    for (int i = 0; i < subject; i++)
    {
        cout<<"Your marks of subject "<<i+1<<" is "<<marks[i]<<endl;
    }
    int* mark=new int(100);
    delete[] marks;
    // cout<<marks[1];
    marks=NULL;   
    delete mark;
    cout<<*mark<<endl;
    mark=NULL; 
    cout<<*mark;
    return 0;
}