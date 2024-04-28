#include<iostream>
using namespace std;

int main(){
    int arr[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter element "<<j<<" of array "<<i+1;
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Element "<<j<<" of array "<<i+1<<" is "<<arr[i][j]<<endl;
        }
        
    }
    
    return 0;
}