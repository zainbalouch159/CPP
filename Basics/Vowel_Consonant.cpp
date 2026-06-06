#include <iostream>
#include <string>
using namespace std;

int main() {
    char words;
cout<<"Enter a character: ";
cin>>words;
if(words=='a' || words=='e' || words=='i' || words=='o' || words=='u' ||
   words=='A' || words=='E' || words=='I' || words=='O' || words=='U'){
    cout<<words<<" is a vowel."<<endl;
   }
else{
    cout<<words<<" is a consonant."<<endl;
}
    return 0;
}
