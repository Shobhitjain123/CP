#include<iostream>
#include<string>
using namespace std;
class human{
    private :
    string name;
    int age;
    public:
    void display(){
        cout<<name<<endl<<age<<endl;
    }
    human(){
        name = "shobhit";
        age = 20;
        cout<<"This is a default constructor"<<endl;
    }
    
};
int main(){
    human a;
    a.display();
}