#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("s");
    s.push("Shobhit");
    s.push("Jain");
    s.push("J");
    cout<<"Top element "<<s.top()<<endl;
    s.pop();
    cout<<"After popping top element "<<s.top()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
    cout<<"Size"<<s.size()<<endl;
}