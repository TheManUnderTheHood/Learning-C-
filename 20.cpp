#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
// class complex{
//     int a,b;
//     public:
//         complex(int x, int y){//this is a parameterized constructor
//             a=x;
//             b=y;
//         }
//         void print();
// };
// void complex :: print(){
//     cout<<a<<" + "<<b<<"i\n";
// }
// int main(){
//     complex a(1,2);
//     complex b= complex(2,3);
//     a.print();
//     b.print();
//     return 0;
// }
class point{
    int x,y;
    public:
        friend float distance(point,point);
        point(int a,int b){
            x=a;
            y=b;
        }
        void coor();
};
void point :: coor(){
    cout<<x<<" "<<y<<endl;
}
float distance(point p,point q){
    return sqrtf(pow(p.x-q.x,2)+pow(p.y-q.y,2));
}
int main(){
    point p(1,2),q(5,6);
    cout<<fixed<<setprecision(2)<<distance(p,q);
}