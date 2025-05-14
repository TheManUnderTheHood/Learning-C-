#include<iostream>
using namespace std;
class item{
    int id;
    float price;
    public:
        void set(int a,float b){
            id=a;
            price=b;
        }
        void get(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int p,q;
    item *ptr=new item[3];
    item *temp= ptr;
    for (int i = 0; i < 3; i++){
        cout<<"Enter Id and price of item: ";
        cin>>p>>q;
        ptr->set(p,q);
        ptr++;
    }
    ptr=temp;
    for (int i = 0; i < 3; i++){
        ptr->get();
        ptr++;
    }
    return 0;
}