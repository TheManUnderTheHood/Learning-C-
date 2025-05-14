#include<iostream>
#include<fstream>
/*Classes for working with files :
    1.fstreambase
    2.ifstream --> derived from fstreambase
    3.ofstream --> derived from fstreambase

There are 2 ways to open a file:

    1.Using the constructor
    2.Using the member function open() of the class*/
using namespace std;
int main(){
    string st="Hello World!!!",st1;
    // ofstream out("sample.txt");//write operation using constructor
    // ofstream out;
    // out.open("sample.txt");//using member function open
    // out<<st;
    // out.close();
    ifstream in("sample.txt");
    // in>>st1;//will get only a word
    // getline(in,st1);//will get a line
    // cout<<st1;
    while (in.eof()==0){
        getline(in,st1);//will get multiple line
        cout<<st1<<endl;   
    }
    return 0;
}
