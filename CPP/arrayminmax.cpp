#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int minNO = arr[0];
    int maxNO = arr[0];
    for(int i=0;i<n;i++){
        maxNO = max(maxNO,arr[i]);
        minNO = min(minNO,arr[i]);
    }
    cout<<minNO<<maxNO;
    return 0 ;
}