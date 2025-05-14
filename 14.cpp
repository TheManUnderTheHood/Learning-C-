#include<iostream>
using namespace std;
class emplyoee{
    int id;
    static int count;
    public:
        void setdata(void){
            cout<<"Enter ID: ";
            cin>>id;
            count++;
        }
        void displaydata(void){
            cout<<"The id is "<<id;
        }
};
int emplyoee :: count;
int main(){
    emplyoee harsh,ankit,udit;
    harsh.setdata();
    harsh.displaydata();
    udit.setdata();
    udit.displaydata();
    ankit.setdata();
    ankit.displaydata();
    return 0;
}