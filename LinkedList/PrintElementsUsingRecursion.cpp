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
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){ 
        temp = temp->next;
    }
    temp->next = n;
}
void print(node* &head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}
void printReverse(node* &head){
    if(head == NULL){
        return;
    }
    printReverse(head->next);
    cout<<head->data<<" ";
    
}
int main(){
    node* head = NULL;
    insertionAtEnd(head, 1);
    insertionAtEnd(head, 2);
    insertionAtEnd(head, 3);
    insertionAtEnd(head, 4);
    insertionAtEnd(head, 5);
    print(head);
    cout<<endl;
    printReverse(head);
}