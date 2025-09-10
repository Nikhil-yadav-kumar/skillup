#include <iostream>
using namespace std;

int main() {
    int num, original, rev= 0, remainder;
    
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }

    if (original == rev) {
        cout << original << " is a Palindrome number." << endl;
    } else {
        cout << original << " is not a Palindrome number." << endl;
    }

    return 0;
}

