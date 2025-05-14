#include<iostream>
using namespace std;
class base{
    public:
        int id,data;
        base(int a){
            id=a;
            data=54;
        }
        void print();
};

void base :: print(){
    cout<<id<<" "<<data<<endl;
    }
class derived : public base{ //inheritance
    public:
        int id1=9;
        derived(int c) : base(c){
            id=c;
            data=89;
        }
};
int main(){
    base harsh(1);
    derived harsh1(2);
    harsh.print();
    harsh1.print();
    cout<<harsh1.id1;
    return 0;
}