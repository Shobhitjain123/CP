#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
node* head;
void insertionAtEnd(node* &head, int val){
    node* n = new node;
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
void ReverseRecur(node* p){
         if(p->next==NULL){
             head = p;
             return;
         }
         ReverseRecur(p->next);
         node* q = p->next;
         q->next = p;
         p->next = NULL;
     }
void display(node* head){
    node* temp  = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    head = NULL;
    insertionAtEnd(head,1);
    insertionAtEnd(head,2);
    insertionAtEnd(head,3);
    insertionAtEnd(head,4);
    display(head);
     ReverseRecur(head);
    display(head);

}