#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // void set(int a){
        //     this->a=a;
        // }
        A& set(int a){
            this->a=a;
            return *this;
        }
        void get(){
            cout<<a<<endl;
        }
};
int main(){
    A a;
    // a.set(15);
    // a.get();
    a.set(78).get();
    return 0;
} 