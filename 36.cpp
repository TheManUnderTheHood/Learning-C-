#include<iostream>
using namespace std;
class base{
    public:
        int a=1;
        virtual void display(){
            cout<<"Base class variable: "<<a<<endl;
        }
};
class derived : public base{
    public:
        int b=2;
        void display(){
            cout<<"Base class variable: "<<a<<endl;
            cout<<"Derived class variable: "<<b<<endl;
        }
};
int main(){
    base * basep;
    base objb;
    derived objd;
    basep =&objd;
    basep->display();
    return 0;
}