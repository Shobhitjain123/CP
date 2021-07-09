#include<iostream>
#include<string>
using namespace std;
class human{
    public :
    string name;
    void introduce();
};
void human :: introduce(){
    cout<< human :: name<<endl;
}
int main(){
    human s;
    s.name = "shobhit";
    s.introduce();
    human v;
    v.name = "tina";
    v.introduce();
    return 0;
}