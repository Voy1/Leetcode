class Solution {
public:
    ListNode* temp;
    
        bool check(ListNode* p) {
        if (NULL == p) return true;
        bool isPal = check(p->next) && (temp->val == p->val);
        temp = temp->next;
        return isPal;
        }       
            
        bool isPalindrome(ListNode* head) {
           temp = head;
           return check(head);
        }
};