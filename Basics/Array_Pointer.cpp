#include <iostream>
using namespace std;

int main() {
    // Arrays in C++
    int marks[] ={23, 45,53,89}; //declaration and initialization of array
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    int mathmarks[4]; //declaration of array
    mathmarks[0]=34;
    mathmarks[1]=45;
    mathmarks[2]=56;
    mathmarks[3]=67;
mathmarks[2]=78; //updating mathmarks[2]
    // cout<<"\nThese are math marks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // for (int i=0; i<4; i++){
    //     cout<<"The math mark of student "<<i<<" is "<<mathmarks[i]<<endl;
    // }
    // int i=0;
    // while (i<4){
    //     cout<<"The math mark of student "<<i<<" is "<<mathmarks[i]<<endl;
    //     i++;
    // }
    // int i=0;
    // do{
    //     cout<<"The math mark of student "<<i<<" is "<<mathmarks[i]<<endl;
    //     i++;
    // }while(i<4);
    int* p = marks; //pointing to first element of marks array
    cout<<*(p++)<<endl; //23
    cout<<*p<<endl; //45
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;


    return 0;
}
