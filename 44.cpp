#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={8,6,7,9,56,1};
    // sort(arr,arr+6);
    sort(arr,arr+6,greater<int>());//decending order
    for (int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
