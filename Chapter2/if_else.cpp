#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter Your age: ";
    cin>>a;
    if (a>50)
    {
        cout<<"Senior Citizen";
    }
    else if (a==50)
    {
        cout<<"nothing";
    }
    
    else{
        cout<<"Not senior citizen";
    }
    
    return 0;
}