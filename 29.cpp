#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"Base class1 constructor called."<<endl;
        }
        void print(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class base2{
    int data2;
    public:
        base2(int i){
            data2=i;
            cout<<"Base class2 constructor called."<<endl;
        }
        void print(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class derived : public base1, public base2{
    int data3,data4;
    public:
        derived(int a,int b ,int c,int d) : base1(a),base2(b){
            data3=c;
            data4=d;
            cout<<"Derived class constructor called."<<endl;
        }
        void pdata(){
            cout<<"The value of data3 is "<<data3<<endl;
            cout<<"The value of data4 is "<<data4<<endl;
        }
};
int main(){
    derived a(1,2,3,4);
    return 0;
}