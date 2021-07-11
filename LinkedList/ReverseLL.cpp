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
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void reverse(node* &head){
    node* current = head;
    node* prevelement;
    node* nextelement;
    prevelement = NULL;
    while(current!=NULL){
        nextelement = current->next;
        current->next = prevelement;
        prevelement = current;
        current = nextelement;
    }
    head = prevelement;
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
    insertionAtEnd(head, 1);
    insertionAtEnd(head, 2);
    insertionAtEnd(head, 3);
    insertionAtEnd(head, 4);
    insertionAtEnd(head, 5);
    display(head);
    reverse(head);
    display(head);
}