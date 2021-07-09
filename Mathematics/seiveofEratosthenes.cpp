#include<iostream>
#include<cmath>
using namespace std;
void seiveofEratosthenes(int n){
   int isPrime[100] = {0};
   for(int i=2;i<=sqrt(n);i++){
       if(isPrime[i]==0){
           for(int j=i*i;j<=n;j+=i){
               isPrime[j] = 1;
           }
       }
   }
   for(int i=2;i<=n;i++){
       if(isPrime[i]==0){
           cout<<i<<endl;
       }
   }
}
int main(){
    int n;
    cin>>n;
    seiveofEratosthenes(n);
}