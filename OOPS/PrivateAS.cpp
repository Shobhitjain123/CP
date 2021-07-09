#include<iostream>
using namespace std;
class human{
    private:
    int age;
    int getAge(){
        return age-5;
    }
    public:
        void display(){
            cout<<getAge()<<endl;
        }
        void setAge(int a){
            age = a;
        }
};
int main(){
human a;
a.setAge(20);
a.display();
}