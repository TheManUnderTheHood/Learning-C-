#include<iostream>
using namespace std;
int study(int day,int samay=2){
    int week=day*samay;
    return week;
}
int main(){
    int day;
    cout<<"enter the day you study:  ";cin>>day ;
    cout<<"you study total:  "<<study(day)<<" hours";

    return 0;
}
