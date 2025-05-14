#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(int n=1){
            a=n;
        }
//A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a copy constructor. If no copy constructor is written in the program compiler will supply its own copy constructor. 
        number(number &obj){
            cout<<"hello";
            a=obj.a;
        }
        void print(){
            cout<<a<<endl;
        }
};
int main(){
    number x(5),y;
    number x1(x);
    x1.print();
    x.print();
    y.print() ;
    return 0;
}