// Deque in STL works on Double ended queue
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Front"<<d.front()<<endl;
    cout<<"Back"<<d.back()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+2);
     cout<<d.size();

}