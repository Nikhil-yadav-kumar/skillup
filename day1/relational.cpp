#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the first no. "<<endl;
    cin>>x;
    cout <<"enter the second no."<<endl;
    cin>>y;
    if (x>y){
        cout<<"x is greater"<<endl;
    }
    
    else if(x<y){
        cout<<"y is greater"<<endl;
    }
    else{
        cout<<"both are equal"<<endl;
    }

}