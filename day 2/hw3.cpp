#include<iostream>
using namespace std;
int main(){
    int f;
    cout<<"enter the fahrenheit: ";
    cin>>f;
    int celsius=(f-32)*5/9;
    cout<<f<<" fahrenheit= "<<celsius<<" celsius"<<endl;
    int c;
    cout<<"enter the celsius: ";
    cin>>c;
    int fahrenheit=(9/5*c)+32;
    cout<<c<<" celsius= "<<fahrenheit<<" fahrenheit";
    return 0;
}