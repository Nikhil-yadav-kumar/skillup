#include <iostream>
using namespace std;

int main() {
    char c;
    cout<<"enter the operations:";
    cin>>c;
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;

    switch(c) {
        case '+':
            cout << "Sum:" <<sum<< endl;
            break;
        case '-':
            cout << "substraction:" <<sub<< endl;
            break;
        case '*':
            cout << "multiplication:" <<mul<< endl;
            break;
        case '/':
            cout << "divison:" <<div<< endl;
            break;
        
        default:
            cout << "Invalid" << endl;
    }

    return 0;
}
