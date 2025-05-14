#include<iostream>
using namespace std;
class tbuth{
    protected:
        string title;
        float rating;
        public:
            tbuth(string s,float r){
                title=s;
                rating=r;
            }
            virtual void display()=0;//do-nothing function or pure virtual funtion
};
class tbuthvid : public tbuth{
    float vidlen;
    public:
        tbuthvid(string s,float r, float v) : tbuth(s,r){
            vidlen=v;
        }
        void display(){
            cout<<"Video Title: "<<title<<endl;
            cout<<"Rating: "<<rating<<endl;
            cout<<"Duration: "<<vidlen<<endl;
        }
};
class tbuthtext : public tbuth{
    int word;
    public:
        tbuthtext(string s,float r, int w) : tbuth(s,r){
            word=w;
        }
        void display(){
            cout<<"Video Title: "<<title<<endl;
            cout<<"Rating: "<<rating<<endl;
            cout<<"Subtitles words: "<<word<<endl;
        }
};
int main(){
    string title="Virtual Functions Example + Creation Rules in C++";
    float rating=4.9;
    float vidlen=28.36;
    int word=456;
    tbuthvid man(title,rating,vidlen);
    man.display();
    tbuthtext hood(title,rating,word);
    hood.display();
    tbuth* tuts[2];
    tuts[0]=&man;
    tuts[1]=&hood;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*Rules for virtual function creation:
    1. They cannot be static.
    2. They are accesed by object members.
    3. Virtual functions can be a friend of another class.
    4. A virtual function in base class might not be used.
    5.If a virtual function defined in the base class, there is no necessity of redefining it in the derived class.*/