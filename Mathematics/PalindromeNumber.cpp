#include<iostream>
using namespace std;
int main(){
    int n,pal,sum=0,temp;
    cin>>n;
    temp=n;
    while(n!=0){
        pal = n%10;
        sum = (sum*10)+pal;
        n = n/10;
    }
    if(temp==sum){
        cout<<"It Is palindrome";
    }
    else{
        cout<<"It is not palindrome";
    }
}