#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insertionAtEnd(node* &head, int val){
    node* n = new node;
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
 node* reverseK(node* &head, int k){
     node* current = head;
     node* prevelement = NULL;
     node* nextelement;
     int count = 0;
     while(current!=NULL && count<k){
         nextelement = current->next;
         current->next = prevelement;
         prevelement = current;
         current = nextelement;
         count++;
    }
    if(nextelement!=NULL){
        head->next = reverseK(nextelement,k);
    }
    head = prevelement;
    return head;
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
    }
    display(head);
    reverseK(head,4);
    display(head);
}