#include<iostream>
#include<string>
using namespace std;
class binary{
  string s;
  public:
    void read(void);
    void chk(void);
    void comp(void);
    void dis(void);
};
void binary :: read(void){
  cout<<"Enter a binary number: ";
  cin>>s;
}
void binary :: chk(void){
  for (int i = 0; i < s.length(); i++){
    if (s.at(i)!='1' && s.at(i)!='0'){
      cout<<"Incorrect format!!!";
      break;
    }
  }
}
void binary :: comp(void){
  chk();//this is called nesting of member function
  for (int i = 0; i < s.length(); i++){
    if (s.at(i)=='0'){
      s.at(i)='1';
    }
    else{
      s.at(i)='0';
    }
  }
}
void binary :: dis(void){
  cout<<s;
}

int main(){

  binary b;
  b.read();
  b.comp();
  b.dis();
}