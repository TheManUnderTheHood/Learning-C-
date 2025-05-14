#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int sumreal(complex o1, complex o2 );
        int sumimg(complex o1 , complex o2);
};
class complex{
    int real,img;
    // friend int calculator :: sumreal(complex , complex);
    // friend int calculator :: sumimg(complex , complex);
    friend class calculator;// befriending whole calculator class 
    public:
        void data(int n1, int n2){
            real=n1;
            img=n2;
        }
        void print(){
            cout<<real<<" + "<<img<<"i";
        }
};
int calculator :: sumreal(complex o1, complex o2){
    return o1.real+o2.real;
}
int calculator :: sumimg(complex o1, complex o2){
    return o1.img+o2.img;
}
int main(){
    complex o1,o2;
    o1.data(1,2);
    o2.data(5,7);
    calculator calc;
    cout<<calc.sumreal(o1,o2)<<endl;
    cout<<calc.sumimg(o1,o2);
    return 0;
} 