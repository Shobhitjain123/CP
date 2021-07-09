#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    // vector<int> a(v);
    // cout<<"Print a"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}
int main(){
    vector<int> vec;
    int size,element;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>element;
        vec.push_back(element);  
    }
    display(vec);
}
