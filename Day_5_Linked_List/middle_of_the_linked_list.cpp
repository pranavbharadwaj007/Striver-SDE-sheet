
// Link : https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* a=head;
        ListNode* b=head;
        while(b!=NULL)
        {
            b=b->next;
            if(b==NULL){
                return a;
            }
                a=a->next;
                b=b->next;
        }
        return a;  
    }
};
