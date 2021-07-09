#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    public:
    
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;
    }
    student(string s, int a, int g){
        cout<<"Paramterised Constructor"<<endl;
        // this->name = name;
        // this->age = age;
        // this->gender = gender;
        name = s;
        age = a;
        gender = g;
    }
    student(student &a){
        cout<<"Copy Contructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    ~student(){
        cout<<"Destructor Called"<<endl;
    }

    void setName(string s){
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    }

    void printinfo(){
        cout<<"Name is... "<<endl;
        cout<<name<<endl;
        cout<<"Age is... "<<endl;
        cout<<age<<endl;
        cout<<"Gender is... "<<endl;
        cout<<gender<<endl;
    }
    bool operator ==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};
int main(){
    // student arr[2];
    // string s;
    // for(int i=0;i<2;i++){
    //     cout<<"Name is... "<<endl;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age is... "<<endl;
    //     cin>>arr[i].age;
    //     cout<<"Gender is... "<<endl;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<2;i++){
    //     arr[i].printinfo(); 
    // }
    student a("shobhit", 20, 0);
    a.printinfo();
    student b("tina", 21, 1);
    b.printinfo();
    student c = a;
    if(
        
    ){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    student *d = new student();
    d->setName("Mukul");
    d->age = 20;
    d->gender= 0;
    d->printinfo();
}