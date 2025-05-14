#include<iostream>
using namespace std;
//initialization list
class test{
    int a;
    int b;
    public:
        test(int i,int j) : a(i), b(a+j){
            cout<<"Constructor executed";
            cout<<endl<<a;
            cout<<endl<<b;
        }
};
int main(){
    test a(1,2);
    return 0;
}