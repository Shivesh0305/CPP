#include<iostream>
using namespace std;

int main(){
    int a[5];
    int a[3]={1,2,3};
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter value of "<<i<<" index: "<<endl;
        cin>>a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Value of "<<i<<" index is "<<a[i]<<endl;
    }
    
    return 0;
}