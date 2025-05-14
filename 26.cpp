#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class student{
    protected:
        string name;
    public:
        int roll;
        void set(string a,int b){
            name=a;
            roll=b;
        }
        void get(){
            cout<<"Name of student: "<<name<<endl<<"Roll no.: "<<roll<<endl;
        }
};

class exam : public student{
    protected:
        float maths,physics;
    public:
        void set_marks(float a,float b){
            maths=a;
            physics=b;
        }
        void get_marks(){
            cout<<"Maths marks: "<<maths<<endl<<"Physics marks: "<<physics<<endl;
        }
};

class result : public exam{
     float percent;
     public:
        void display(){
            percent=(maths+physics)/2;
            cout<<name<<" scored total "<<maths+physics<<" marks."<<endl<<"Total percentage is "<<percent<<"\%";
        }
};
int main(){
    result harsh;
    harsh.set("Harsh Kushwaha",29);
    harsh.get();
    harsh.set_marks(85.5,92);
    harsh.get_marks();
    harsh.display();
    return 0;
}