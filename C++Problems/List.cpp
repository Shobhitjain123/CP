#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1; //list of length 0
    list1.push_back(2);
    list1.push_back(11);
    list1.push_back(7);
    list1.push_back(4);
    list1.push_back(15);
    list1.push_back(1);
    display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(11);    
    // display(list1);
    // return 0;

     list<int> list2(7); //list of size 7
    //  list2.push_front(45);
    //  list2.push_front(31);
    //  list2.push_front(9);
    //  list2.push_front(4);
    //  display(list2);
     list<int> :: iterator iter;
     iter = list2.begin();
     *iter = 45;
     iter++;
     *iter = 5;
     iter++;
     *iter = 78;
     iter++;
     *iter = 23;
     iter++;
     *iter = 14;
     iter++;
     *iter = 44;
     iter++;
     *iter = 24;
     display(list2);
    //  list2.remove(23);
     
    //  list1.sort();
    //  list2.sort();
    //  list1.merge(list2);
    //  display(list1);
     list1.swap(list2);
     display(list1);
     display(list2);
;
}