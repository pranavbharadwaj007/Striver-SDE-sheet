
// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* res=new ListNode(0);
        ListNode* p=res;
        ListNode* c1=l1;
        ListNode* c2=l2;
        
        while(c1!=NULL && c2!=NULL){
            if(c1->val<c2->val){
                p->next=c1;
                c1=c1->next;
            }
            else{
                p->next=c2;
                c2=c2->next;
            }
            p=p->next;
        }

        p->next=c1!=NULL ? c1:c2;
        return res->next; 
    }
};
