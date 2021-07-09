// Priority Queue is such a data structure that takes its first element as the greatest of all elements(Therefore max heap by default)
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> max;//max heap by default
    priority_queue<int,vector<int>, greater<int>> min;//min heap
    max.push(56);
    max.push(23);
    max.push(45);
    max.push(78);
    max.push(14);
    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;
    min.push(56);
    min.push(23);
    min.push(45);
    min.push(78);
    min.push(14);
    int n1=min.size();
    for(int i=0;i<n1;i++){
        cout<<min.top()<<" ";
        min.pop();
    }cout<<endl;
    cout<<"Empty or not "<<min.empty()<<endl;
}
