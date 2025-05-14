#include<iostream>
using namespace std;
class complex{
    int a,b;
    public://constructor is a special member function with the same name as of the class. USed to initialise the objects of its class.
        complex(void){//this is a default constructor
            a=10;
            b=5;
        }
        void print();
};
void complex :: print(){
    cout<<a<<" + "<<b<<"i";
}
int main(){
    complex c;
    c.print();
    return 0;
}