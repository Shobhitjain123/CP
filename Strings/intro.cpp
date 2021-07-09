#include<iostream>
using namespace std;
int main(){
    string s;
    //getline(cin, s);//Getline is used to take string input with spaces.
    //s.clear();//It clears whole string and makes it empty.
    //cout<<s<<endl;
    string s1 = "DataStructures";
    string s2 = "Datastructures";
    // s1.append(s2);// Append function is used to concatenate two strings.
    cout<<s1.compare(s2);
}