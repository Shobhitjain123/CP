// Set in STL is such a data structure that stores unique elements and return values in sorted order(ascending by default)
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(89);
    s.insert(60);
    s.insert(17);
    s.insert(15);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    set<int>::iterator iter=s.begin();//Gives the First element reference to the iterator
    iter++;
    s.erase(iter);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"17 present or not "<<s.count(17)<<endl;//count method returns bollean value whether element is present or not


    set<int>::iterator itr=s.find(17);//Gives the Particular element reference to the iterator
    for(auto i=itr;i!=s.end();i++){
        cout<<*i<<" ";
    }
}