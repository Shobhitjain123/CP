#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insertionAtEnd(node* &head, int val){
    node* n = new node();
    n->data = val;
    n->next = NULL;
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next= n;
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
    int n,i;
    cout<<"Enter numbers required"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        insertionAtEnd(head, i);
        display(head);
    }
}