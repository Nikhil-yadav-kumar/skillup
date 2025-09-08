#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks!" << endl;
    } 
    
    else {
        
        switch (marks / 10) {
            case 10: 
            case 9:  
            case 8:  
            case 7:  
                cout << "Distinction" << endl;
                break;

            case 6: 
                cout<<"first division "<<endl;
                break; 
            case 5:  
            case 4:  
                cout << "Pass" << endl;
                break;
            // case 3:
            // case 2:
            // case 1:
            //     cout<<"fail"<<endl;
            default: 
                cout << "Fail" << endl;
        }
    }

    return 0;
}