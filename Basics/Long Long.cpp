#include <iostream>
using namespace std;

int main() {
    // Scenario: Ek saal mein kitne seconds hote hain? 
    // Agar hum 100 saal ka hisab lagayen:
    
    long long years = 100;
    long long secondsInYear = 31536000; // 365 * 24 * 60 * 60

    // Galat Tareeka (int use karna)
    int galat_hisab = years * secondsInYear * 10; 
    // Ye number 3 billion ban raha hai, jo int ki limit (2 billion) se bahar hai.

    // Sahi Tareeka (long long use karna)
    long long sahi_hisab = years * secondsInYear * 10;

    cout << "--- Overflow Ka Tamasha ---" << endl;
    cout << "Int (Galat Result): " << galat_hisab << endl; 
    cout << "Long Long (Sahi Result): " << sahi_hisab << endl;

    return 0;
}
