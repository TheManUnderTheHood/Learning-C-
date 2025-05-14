#include<iostream>
using namespace std;
/*
 _______________________________________________________________________________________________________
| 	                 |    Public Derivation     | 	    Private Derivation     |    Protected Derivation|
|____________________|__________________________|______________________________|________________________|
|Private members     |      Not Inherited       |        Not Inherited         |     	Not Inherited   |  
|____________________|__________________________|______________________________|________________________|
|Protected members   |        Protected         |          Private             |          Protected     |   
|____________________|__________________________|______________________________|________________________|
|Public members      |     	   Public	        |          Private             |          Protected     |

*/

class base{
    protected:
        int a;
    private:
        int b;

};
class derived : base{
    public:
        void print(){
            cout<<a;
        }
};
int main(){
    derived d;
    d.print();
    return 0;
}