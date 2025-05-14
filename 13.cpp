#include<iostream>
using namespace std;
class Shop{
    int id[6];
    int price[6];
    int counter;
    public:
        void initcounter(){
            counter=0;
        }
        void displayprice(void);
        void setprice(void);
};
void Shop :: setprice(void){
    cout<<"Enter ID of the your item no. "<<counter+1<<": ";
    cin>>id[counter];
    cout<<"Enter price of your item no. "<< counter+1<<": ";
    cin>>price[counter];
    counter++;
}
void Shop :: displayprice(void){
    for (int i = 0; i < counter; i++){
        cout<<"The price of ID "<<id[i]<<" is "<<price[i]<<endl;
        }
    
}
int main(){
    Shop harsh;
    harsh.initcounter();
    int n;
    cout<<"Enter no. of items to be added: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        harsh.setprice();
    }
    harsh.displayprice();
    return 0;
}