#include<iostream>
using namespace std;

template<class t1,class t2>
float funcavg(t1 a,t2 b){
    float avg=(a+b)/2;
    return avg;
}
int main(){
    cout<<funcavg(5,4);
    return 0;
}