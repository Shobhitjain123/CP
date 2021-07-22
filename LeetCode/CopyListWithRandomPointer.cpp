class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* iter = head;
        Node* front = head;
        while(iter!=NULL){
            front = iter->next;
            Node* copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        iter = head;
        while(iter!=NULL){
            if(iter->random!=NULL){
              iter->next->random = iter->random->next;  
            }
            iter = iter->next->next;
        }
        iter = head;
        Node* newHead = new Node(0);
        Node* jump = newHead;
        while(iter!=NULL){
            front = iter->next->next;
            jump->next = iter->next;
            iter->next = front;
            jump = jump->next;
            iter = iter->next;
        }
        return newHead->next;
    }
};