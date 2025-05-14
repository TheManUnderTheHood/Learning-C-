#include<iostream>
using namespace std;
class y;
class x{
    int data;
    friend void add(x o1, y o2);
    public:
        void setvalue(int val){
            data=val;
        }
};
class y{
    int data;
    friend void add(x o1, y o2);
    public:
        void setvalue(int val){
            data=val;
        }
};
void add(x o1,y o2){
    cout<<"Sum of data of x and y gives "<<o1.data+o2.data;
}
int main(){
    x a1;
    a1.setvalue(1);
    y a2;
    a2.setvalue(2);
    add(a1,a2);
    return 0;
}