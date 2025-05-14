#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

int swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a, b;
    cout<<"enter no.  "; cin>>a;
    cout<<"enter no.  "; cin>>b;
    cout<<"sum is  "<<sum(a,b)<<endl;
    cout<<"before swapping "<<endl<<a<<endl<<b<<endl;
    swap(a,b);
    cout<<"after swapping "<<endl<<a<<endl<<b;
    return 0;
}