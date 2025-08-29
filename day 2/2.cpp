#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number:";
    cin>>n;
    if(n>0){
        cout<<"no. is +ve "<<endl;
    }
    else if (n=0){
        cout<<"no. is zero."<<endl;
    }
    else{
        cout<<"no. is -ve.";
    }
    return 0;
}