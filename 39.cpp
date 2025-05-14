#include<iostream>
using namespace std;
// template<class T>
// class vector{
//     public:
//         T *arr;
//         int size;
//         vector(int a){
//             size=a;
//             arr=new T[size];
//         }
//         T product(vector &v){
//             T d=0;
//             for (int i = 0; i < size; i++){
//                 d+=this->arr[i]* v.arr[i];
//             }
//             return d;
//         }
// };

////////////////////////////////defualt templates//////////////////////////////////

template <class T1=int, class T2=float, class T3=char>
class Harry{
    public:
        T1 a;
        T2 b;
        T3 c;
        Harry(T1 x, T2 y, T3 z) {
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main(){
    // vector<int> v1(3);
    // v1.arr[0]=2;
    // v1.arr[1]=3;
    // v1.arr[2]=4;
    // vector<int> v2(3);
    // v2.arr[0]=3;
    // v2.arr[1]=4;
    // v2.arr[2]=5;
    // cout<<v1.product(v2)<<endl;
    // cout<<v2.product(v2);
    // vector<float> v1(3);
    // v1.arr[0]=2.2;
    // v1.arr[1]=3.4;
    // v1.arr[2]=4.5;
    // vector<float> v2(3);
    // v2.arr[0]=3;
    // v2.arr[1]=4;
    // v2.arr[2]=5;
    // cout<<v1.product(v2)<<endl;

    Harry<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    Harry<float, char, char> g(1.6, 'o', 'c');
    g.display();
    return 0;
}
