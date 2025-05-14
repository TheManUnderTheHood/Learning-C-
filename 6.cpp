#include<iostream>
using namespace std;
int main(){
    int a=3;// this is an integer
    int *b=&a; //this is a pointer 
    int **c=&b;//pointer to pointer
    cout<<b<<endl<<*b<<endl<<&a<<endl<<a<<endl;
    cout<<c<<endl<<*c<<endl<<**c<<endl;
}

// *b will give the value of pointer
// *b and a and **c will give the same value
// &a and b will act as pointer
