#include<iostream>
using namespace std;
class complex{
    int r,i;
    public:
        void get(){
            cout<<"The real part is "<<r<<endl;
            cout<<"The imaginary part is "<<i<<endl;
        }
        void set(int a, int b){
            r=a;
            i=b;
        }
};
int main(){
    complex c;
    complex *ptr=&c;
    complex *p=new complex;
// c.set(2,3) is same as
    ptr->set(2,3);
// c.get() is same as
    ptr->get();
    (*p).set(4,5);
    (*p).get();
    return 0;
}