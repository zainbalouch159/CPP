#include <iostream>
using namespace std;

int main() {
    float cgpa;
    cout<<"Enter your CGPA"<<endl;
    cin>>cgpa;
    float* marks=new float(cgpa);
    cout<<"Your CGPA is "<<*marks<<endl;
    return 0;
}