#include<iostream>
using namespace std;

class Employee{
        public:
        string name;
        int salary;

        Employee(string n, int s, int p){
            this->name=n;
            this->salary=s;
            this->password=p;
        }
        void details(){
            cout<<"The name is "<<this->name<<" and the salary is "<<this->salary<<endl;
        }

        void getpassword(){
            cout<<"The secret password is: "<<this->password<<endl;
        }

        private:
        int password;

    };

int main(){
    // Employee s;
    // s.name="shivesh";
    // s.salary=20000000;

    // cout<<s.name<<endl;
    // cout<<s.salary<<endl;


    Employee s("shivesh",20000,1234);
    s.details();
    // cout<<s.password; ---> won't run as declared in private
    s.getpassword();
    return 0;
}