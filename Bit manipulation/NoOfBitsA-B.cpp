#include<iostream>
using namespace std;
int main(){
    int a=12,b=15;
    int c=a^b;
    int count=0;
    while(c!=0){
        if(c&1==1){
            count++;
            c>>1;
        }
        else c>>1;
    }
    cout<<count;
} 