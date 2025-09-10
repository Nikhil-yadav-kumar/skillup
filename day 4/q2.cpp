#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks: ";
    cin>>marks;
    
    if(marks>=90){
        cout<<"Grade A";
    }
    else if(marks>=75){
        cout<<"Grade B";
    }
    else if(marks>=50){
        cout<<"Grade c";
    }
    else{
        cout<<"fail";
    }


    return 0;
}