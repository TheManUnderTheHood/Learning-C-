#include<iostream>
using namespace std;
int fac(int n){
    if (n<=1){
        return 1;
    }
    else{
        int fact=n*fac(n-1);
        return fact;
    }
}
int fib(int n){

    if (n==1 || n==0)
    {
        return n;
    }
    
    else {
        return fib(n-2)+ fib(n-1);
    } 
}
// int main(){
//     int n;
//     cout<<"enter the no. whose factorial is to be found:  ";cin>>n;
//     cout<<"the factorial of the given number is "<<factorial(n);
//     return 0;
// }

int main()
{
    int n, i=0;
    cin>>n;
    while (i<n)
    {
        cout<<fib(i)<<" ,";
        i++;
    }
    return 0;
}