#include <iostream>
using namespace std;
int main(){

    // Demonstration of if-else-if ladder

    int age;
    cout << "Enter your age: ";
    cin >> age;
    // if((age > 18) && (age < 60)){ // And && operator ma dono conditions true honi chahiye
    //     cout << "You are eligible to vote." << endl;
    // } else if(age == 18){ 
    //     cout << "You have just become eligible to vote." << endl;
    // }
    // else if(age >= 60){ 
    //     cout << "You are a senior citizen." << endl;
    // } else {
    //     cout << "You are not eligible to vote." << endl;
    // } 

    // Selection control structure using switch-case

    switch (age)
    {
    case 18:
        cout << "Your age is 18." << endl;
        break;
        case 22:
        cout << "Your age is 22" << endl;
        break;
        case 15:
        cout << "Your age is 15" << endl;
        break;
    
    default:
    cout << "Your age is neither 18, 22 nor 15." << endl;
        break;
    }
    cout << "Thank you!" << endl;
    return 0;
}
