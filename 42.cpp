#include<iostream>
#include<list>
using namespace std;
int main(){
    // list<int> list2;
    // list2.push_back(1);
    // list2.push_back(2);
    // list2.push_back(3);
    // list2.push_back(4);
    // list2.push_back(5);
    list<int> :: iterator iter;
    // for (iter=list2.begin(); iter!=list2.end(); iter++){
    //     cout<<*iter<<" ";
    // }
    list<int> list1;
    list1.push_back(9);
    list1.push_back(8);
    list1.push_back(7);
    list1.push_back(6);
    list1.push_back(5);
    list1.sort();//for sorting
    list1.reverse();//for reversing
    for (iter=list1.begin(); iter!=list1.end(); iter++){
        cout<<*iter<<" ";
    }

    return 0;
}