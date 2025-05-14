#include<iostream>
using namespace std;
class base1{
    protected:
        int base1int;
};
class base2{
    protected:
        int base2int;

};
class derived : public base1, public base2{
    public:
    void set(int a,int b){
        base1int=a;
        base2int=b;
    }
        void show(){
            cout<<base1int<<" + "<<base2int<<" = "<<base1int+base2int;
        }
};
int main(){
    derived h;
    h.set(5,3);
    h.show();
    return 0;
}

//Ambiguity error can be removed using scope resolution operator or by creating function with same name in derived class which will overwrite the base class function.