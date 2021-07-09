#include<iostream>
using namespace std;
void func(int n){
    int res = 0;
    for(int i=5;i<=n;i=i*5){
        res = res + (n/i);
    }
    cout<<"Trailing Zeros Are"<< res;
}
int main(){
    int n;
    cin>>n;
    func(n);
}