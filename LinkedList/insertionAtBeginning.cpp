#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insertionAtBegin(node* &head, int x){
    node* n = new node;
    n->data = x;
    n->next = head;
    // if(head == NULL){
    //     head = n;  //Another Approach specifying the condition;
    //     return;
    // }
    head = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    int n,i,x;
    cout<<"Enter the Numbers erequired"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        insertionAtBegin(head, i);
        display(head);
    }
}