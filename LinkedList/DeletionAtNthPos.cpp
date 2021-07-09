#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insertAtNthPos(node* &head,int val,int pos){
    node* n= new node;
    n->data = val;
    n->next = NULL;
    if(pos==1){
        n->next = head;
        head = n;
        return;
    }
    node* temp = head;
    for(int i=0;i<pos-2;i++){
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void deleteAtNthPos(node* &head, int pos1){
    node* temp = head;
    if(pos1 == 1){
        head = temp->next;
        delete temp;
        return;
    }
    for(int i=0;i<pos1-2;i++){
        temp = temp->next;
    }
    node* temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
}
void deleteNthElement(node* &head, int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
}
void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    insertAtNthPos(head,2,1);
    insertAtNthPos(head,3,2);
    insertAtNthPos(head,4,1);
    insertAtNthPos(head,5,3);
    insertAtNthPos(head,1,3);
    display(head);
    int pos1;
    cout<<"Enter position to be deleted"<<endl;
    cin>>pos1;
    deleteAtNthPos(head, pos1);// Deleting by position of element.
    display(head);
    deleteNthElement(head, 5); // Deleting by value of element.
    display(head);
}