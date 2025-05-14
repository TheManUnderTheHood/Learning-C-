#include<iostream>
using namespace std;
class base{
    public:
        int a;
        void display(){
            cout<<"Base class variable: "<<a<<endl;
        }
};
class derived : public base{
    public:
        int b;
        void display(){
            cout<<"Base class variable: "<<a<<endl;
            cout<<"Derived class variable: "<<b<<endl;
        }
};
int main(){
    base * basep;
    derived * derivedp;
    base objb;
    derived objd;
    basep =&objd;
    derivedp =&objd;
    basep->a=69;
    (*basep).display();// it will call display() of base class bcuz pointer is of base class(late binding)
    derivedp->a=2;
    derivedp->b=3;
    (*derivedp).display();
    return 0;
}

