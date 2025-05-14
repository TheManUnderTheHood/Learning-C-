#include<iostream>
#include<string.h>
using namespace std;
class student{
    protected:
        string name;
        int roll;
    public:
        void setnameroll(string a,int b){
            name=a;
            roll=b;
        }
        void get(){
            cout<<"Name: "<<name<<endl<<"Roll no.: "<<roll<<endl;
        }
};
class test : virtual public student{
    protected:
        float maths,physics;
    public:
        void setmarks(float a,float b){
            maths=a;
            physics=b;
        }
        void getmarks(){
            cout<<"Maths score: "<<maths
            <<endl<<"Physics score: "<<physics<<endl;
        }
};
class sports : virtual public student{
    protected:
        float pt;
    public:
        void setpt(float a){
            pt=a;
        }
        void getpt(){
            cout<<"PT score: "<<pt<<endl;
        }
};
class result : public test, public sports{
    private:
        float total;
    public:
        void display(){
            total =maths+physics+pt;
            get();
            getmarks();
            getpt();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main(){
    result harsh;
    harsh.setnameroll("Harsh Kushwaha",29);
    harsh.setmarks(90,75.5);
    harsh.setpt(80);
    harsh.display();
    return 0;
}