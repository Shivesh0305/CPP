#include<iostream>
using namespace std;

int main(){
    short d=5;
    int a=1;
    long b=2;
    long long c=3;
    const float e=23.32;
    double f=56.66;
    long double g=22.11;
    cout<<"The numer u want is "<<sizeof(a)<<endl;
    cout<<"The numer u want is "<<sizeof(b)<<endl;
    cout<<"The numer u want is "<<sizeof(c)<<endl;
    cout<<"The numer u want is "<<sizeof(d)<<endl;
    cout<<"The numer u want is "<<sizeof(e)<<endl;
    cout<<"The numer u want is "<<sizeof(f)<<endl;
    cout<<"The numer u want is "<<sizeof(g)<<endl;
    return 0;
}