#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter any number: ";
    cin>>marks;
    if(marks>=90){
        cout<<"grade A"<<endl;
    }
    else if (marks>=75){
        cout<<"grade B"<<endl;
    }
    else if ( marks>=50){
        cout<<"grade C"<<endl;
    }
    else {
        cout<<"fail";
    }
}