#include<iostream>
#include<string>
using namespace std;

int main(){
    string a="shivesh";
    cout<<a<<endl;
    // cout<<a[1];
    cout<<"Length of a: "<<a.length()<<endl;
    cout<<"Substring of a: "<<a.substr(1,5)<<endl;
    return 0;
}