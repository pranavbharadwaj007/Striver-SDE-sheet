
// Link : https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* h1=headA;
        ListNode* h2=headB;
        while(h1!=h2){
            h1=h1==NULL?headB:h1->next;
            h2=h2==NULL?headA:h2->next;
        }
        return h1;
    }
};
