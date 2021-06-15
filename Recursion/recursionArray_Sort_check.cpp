#include<iostream>
using namespace std;
bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
        
        return (arr[0]>arr[1] && sorted(arr+1, n-1));
    
}
int main(){
    int arr[] = {6,5,4,3,2,1};
    cout<<sorted(arr,6);
    return 0;
}