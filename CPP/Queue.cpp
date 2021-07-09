#include<iostream>
#include<queue>
using namespace std;
// void display(queue<int> &q){
//     for(int i:q){
//         cout<<i<<endl;
//     }
// }
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"First Element"<<q.front()<<endl;
    q.pop();
    cout<<"First Element"<<q.front()<<endl;
    // display(q);
    for(int i:q){
        cout<<i<<endl;
    }
}