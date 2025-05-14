#include<iostream>
using namespace std;
int main(){
    //new keyword
    int *p = new int(40);
    cout<<*p<<endl;

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    //delete keyword ->only dynamically allocated variables can be destroyed using delete operator
    delete[] arr;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;
} 