#include<iostream>
#include<map>//map is an associative array like dictionary
using namespace std;
int main(){
    map<string,int>marks;
    marks["Harsh"]= 95;
    marks["Ankit"]= 80;
    marks["Nish"]= 78;
    map<string,int> :: iterator iter;
    for ( iter = marks.begin(); iter!=marks.end() ; iter++){
        cout<<(*iter).first<<": "<<(*iter).second<<endl;
    }
    return 0;
}