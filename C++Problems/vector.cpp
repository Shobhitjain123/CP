#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
    vector<int> :: iterator iter = vec.begin();
    vec.insert(iter+3,3,45);
    display(vec);
    
}
