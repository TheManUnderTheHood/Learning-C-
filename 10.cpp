#include<iostream>
using namespace std;

class students{
    private:
    string name;
    int dob;
    public:
    int roll;
    void setData(string a, int b);
    void getData(){
        cout<<name<<endl;
        cout<<dob<<endl;
        cout<<roll;
    };
};
void students :: setData(string a, int b){
    name=a;
    dob=b;
}
int main(){
    students harsh;
    harsh.roll=27;
    harsh.setData("Harsh",6);
    harsh.getData();
    return 0;
}
