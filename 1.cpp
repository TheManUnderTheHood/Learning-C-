#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        int k=1;
        for (int j=1;j<=n-i;j++) {
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<k<<" ";
            k=k*(i-j)/j; 
        }
        cout<<endl;
    }
    return 0;
}