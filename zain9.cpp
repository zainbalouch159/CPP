#include <iostream>
using namespace std;

int main() {
//     for (int i = 0; i < 9; i++)
//     {
        
//         if (i==3){
//           break;
//         }
//         cout<< i << endl;
// }
    for (int i = 0; i < 9; i++)
    {
        
        if (i==3) {
          continue;
        }
        cout<< i << endl;
    }
    return 0;
}