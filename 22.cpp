#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(int n){
            a=n;
        }
        ~number(){//A destructor is a type of function which is called when the object is destroyed. Destructor never takes an argument nor does it return any value. 
            cout<<"hello";
        }
        void print(){
            cout<<a<<endl;
        }
};
int main(){
    number c(1);
    c.print();
    return 0;
}