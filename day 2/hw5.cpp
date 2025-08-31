#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age: ";
    cin>>age;
    if(age>=18){
        cout<<"eligible for voting";
    }
    else{
        cout<<"not eleigible for voting";
    }
    return 0;
}