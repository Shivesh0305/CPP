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

class Programmer : public Employee{

    public:
    int errors;
};

int main(){

    return 0;
}