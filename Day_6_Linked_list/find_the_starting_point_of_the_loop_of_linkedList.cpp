
// Link : https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast!=NULL &&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
               ListNode *ptr=head;
               while(ptr!=slow){
                   ptr=ptr->next;
                   slow=slow->next;
                  
               }
                 return ptr;
            }
        }
        return NULL;
    }
};
