#include<iostream>
using namespace std;
int main(){
    cout<<"The Party"<<endl;
    cout<<"Temme your age:  ";
    int(age);
    cin>>age;
    if (age<18){
        cout<<"You are strictly prohibited from entering!!!"<<endl;
    }
    else if (age==18){
        cout<<"You are allowed but with some restrictions!!!"<<endl;
    }
    else{
        cout<<"You are allowed!!!"<<endl;
    }
    return 0;
}