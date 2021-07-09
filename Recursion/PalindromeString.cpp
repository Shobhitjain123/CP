#include<iostream>
using namespace std;
bool pal(string s, int l,int r){
    if(l>=r)
        return true;
    if(s[l]!=s[r])
        return false;
    
    return pal(s,l+1,r-1);
}
int main(){
    string s;
    int l,r;
    cin>>s;
    l=0;
    r=s.length()-1;
    cout<<pal(s,l,r);
}