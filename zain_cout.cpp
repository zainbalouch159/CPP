#include <iostream>
using namespace std;

int main(){
int a=4;
float* b = new float(44.78);
//delete b;i
*b=42;
cout<<*b;
return 0;
}

