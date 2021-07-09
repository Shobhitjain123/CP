//Time complexity O(n)
//Space complexity O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = 0;
    for(int i=0;i<n;i++){
        result  = result ^ arr[i];

    }
    cout<<result;
}