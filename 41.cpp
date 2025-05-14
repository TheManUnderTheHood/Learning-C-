#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";// or .at() can also be used
    }
}
int main(){
    vector<int> vec1;// zero length vector
    vector<string> vec2;// 5 length vector
    int ele;
    string elem;
    for (int i = 0; i < 5; i++){
        cin>>ele;
        vec1.push_back(ele);//push function
    }
    for (int i = 0; i < 5; i++){
        cin>>elem;
        vec2.push_back(elem);//push function
    }
    vec1.clear();
    // vec1.pop_back();//pop function
    vector<int> :: iterator iter =vec1.begin();//to create a iterator(like pointer pointing to an index) .begin() is used for pointing it to begining of the vector
    // vec1.insert(iter+2,5,677);//(iterator,no. of copy,number)
    cout<<vector<int>(vec1);
    display(vec1);
    display(vec2);
    return 0;
}                                                                                        