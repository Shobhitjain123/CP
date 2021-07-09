#include<iostream>
#include<string>
using namespace std;
class human{
    private:
    int age;
    string name;
    public:
    // human(){
    //     cout<<"This is default constructor"<<endl;
    //     name = "sj";
    //     age = 20;
    // }
    // human(string name){
    //     this->name = name;
    //     age = 20;
    // }
    // human(int age){
    //     name = "sj";
    //     age = age;
    // }
    human(string name = "Shobhit", int age = 20){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<name<<endl<<age<<endl;
    }
};
int main(){
// human a;
// a.display();
// human b("shobhit");
// b.display();
    human a;
    a.display();
}