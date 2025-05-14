#include<iostream>
using namespace std;
class complex{
    int real,img;
    friend complex sum(complex o1, complex o2);
    public:
        void data(int n1, int n2){
            real=n1;
            img=n2;
        }
        void print(){
            cout<<real<<" + "<<img<<"i";
        }
};
complex sum(complex o1, complex o2){
    complex o3;
    o3.data((o1.real+o2.real),(o1.img+o2.img));
    return o3;
}
int main(){
    complex num1,num2,add;
    int i,j,l,m;
    cout<<"Enter real part of complex 1: ";cin>>i;
    cout<<"Enter imaginary part of complex 1: ";cin>>j;
    cout<<"Enter real part of complex 2: ";cin>>l;
    cout<<"Enter imaginary part of complex 2: ";cin>>m;
    num1.data(i,j);
    num2.data(l,m);
    add= sum(num1,num2);
    add.print();
    return 0;
} 