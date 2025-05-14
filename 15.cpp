#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
        void data(int a,int b){
            real=a;
            img=b;
        }
        void sum(complex n,complex m){
            real=n.real+m.real;
            img=n.img+m.img;
        }
        void print(){
            cout<<"Sum is "<<real<<"+"<<img<<"i\n";
        }
};

int main(){
    complex num1,num2,add;
    int i,j,l,m;
    cout<<"Enter real part of complex 1: ";cin>>i;
    cout<<"Enter imaginary part of complex 1: ";cin>>j;
    cout<<"Enter real part of complex 2: ";cin>>l;
    cout<<"Enter imaginary part of complex 2: ";cin>>m;
    num1.data(i,j);
    num2.data(l,m);
    add.sum(num1,num2);
    add.print();
    return 0;
}