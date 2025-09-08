#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        temp = num % 10;       
        rev = rev * 10 + temp; 
        num = num/ 10;          
    }

    cout << "Reversed number : " << rev << endl;

    return 0;
}