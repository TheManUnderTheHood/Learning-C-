#include <iostream>
#include <string>
using namespace std;
class binary{
    string s;
public:
    int read(void);
    int chk(void);
    int comp(void);
    int dis(void);
};
int binary ::read(void){
    cout << "Enter a binary Number: ";
    cin >> s;
}
int binary::chk(void){
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) != '1' && s.at(i) != '0'){
            cout << "Non Binary Number!!!"<<endl;
            exit(0);
        }
    }
}
int binary::comp(void){
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}
int binary::dis(void){
    cout<<"Your number: "<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    binary a;
    a.read();
    a.chk();
    a.dis();
    a.comp();
    a.dis();
    return 0;
}