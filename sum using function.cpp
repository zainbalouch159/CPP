#include <iostream>
using namespace std;

// Logic: Function do integer values lega aur unka total wapas bhejega.
int sum(int a, int b) {
    int c = a + b; 
    return c; 
}

int main() {
    // Variable Initialization: Taake memory mein pehle se koi kachra (garbage) na ho.
    int x = 0; 
    int y = 0;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    // Logic: Function call karke result ko ek variable mein store karna behtar hai.
    int result = sum(x, y);

    cout << "Sum of " << x << " & " << y << " is " << result << endl;

    return 0;
}
