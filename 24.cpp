// #include<iostream>
// using namespace std;
// class base{
//     int data1;
//     public:
//         int data2;
//         void setdata();
//         int getdata1();
//         int getdata2();
// };
// void base :: setdata(void){
//     data1=10;
//     data2=20;
// }
// int base :: getdata1(){
//     return data1;
// }
// int base :: getdata2(){
//     return data2;
// }
// class derived : public base{
//     int data3;
//     int data4;
//     public:
//         void process(){
//             data3=data2*getdata1();
//             data4=data3*getdata2();
//         }
//         void print(){
//             cout<<"Value of data 1 is "<<getdata1()<<endl;//data1 was private so it was not inherited so getdata1() is used
//             cout<<"Value of data 2 is "<<data2<<endl;//data2 and data3 is public so it can called directly
//             cout<<"Value of data 3 is "<<data3<<endl;
//             cout<<"Value of data 4 is "<<data4<<endl;
//         }
// };
// int main(){
//     derived harsh;
//     harsh.setdata();
//     harsh.print();
//     harsh.process();
//     harsh.print();
//     return 0;
// }

#include<iostream>
using namespace std;
class base{
    int data1;
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};
void base :: setdata(void){
    data1=10;
    data2=20;
}
int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
    return data2;
}
class derived : base{
    int data3;
    int data4;
    public:
        void process(){
            setdata();//since it is private it can be called inside class only
            data3=data2*getdata1();
            data4=data3*getdata2();
        }
        void print(){
            cout<<"Value of data 1 is "<<getdata1()<<endl;//data1 was private so it was not inherited so getdata1() is used
            cout<<"Value of data 2 is "<<data2<<endl;//data2 and data3 is public so it can called directly
            cout<<"Value of data 3 is "<<data3<<endl;
            cout<<"Value of data 4 is "<<data4<<endl;
        }
};
int main(){
    derived harsh;
    harsh.process();
    harsh.print();
    return 0;
}