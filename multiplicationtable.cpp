#include <iostream>
#include <limits>
using namespace std;
int main(){
   /* Loops in C++
   There are three main types of loops in C++:
   1. for loop
    2. while loop
    3. do-while loop    
   */  

  // for loop demonstration

//   for (int i=1; i<=5; i++)
//         cout << "Iteration number: " << i << endl;

    // while loop demonstration
// syntax
//    while(condition){
//        // code to be executed
//    }
// int j = 1;
// while(j <= 5){
//     cout << "While Loop Iteration number: " << j << endl;
//     j++;
// }

    // do-while loop demonstration
    // syntax
    // do{
    //    // code to be executed    
    // }while(condition);

    // int k = 1;
    // do{
    //     cout << "Do-While Loop Iteration number: " << k << endl;
    //     k++;
    // }while(false); // condition is false, so loop will execute only once
int g;
cout << "Enter a number to print its multiplication table: ";
cin >> g;
    for (int i = 1; i <= 10; i++)
        cout <<g<< " x " << i << " = " << g*i << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nPress Enter to exit..." << endl;
    cin.get();
    return 0;
}