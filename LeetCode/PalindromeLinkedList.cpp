class Solution {
public:
    ListNode* reverseLL(ListNode* &head){
            ListNode* curr = head;
            ListNode* prev = NULL;
            ListNode* next;
            while(curr!=NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
            return head;
        }
    bool isPalindrome(ListNode* head) {
         if(head==NULL || head->next==NULL){
             return true;
         }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverseLL(slow->next);
        slow = slow->next;
        
        while(slow!=NULL){
            if(head->val!=slow->val){
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
};