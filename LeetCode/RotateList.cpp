class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        int len = 1;
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
            len++;
        }
        k = k%len;
        k = len - k;
        temp->next = head;
        while(k){
            temp = temp->next;
            k--;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};