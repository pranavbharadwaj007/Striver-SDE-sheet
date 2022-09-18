
// https://leetcode.com/problems/rotate-list/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)return head;
        ListNode* curr=head;
        int cnt=1;
        while(curr->next!=NULL){
            cnt++;
            curr=curr->next;
        }
        k=k%cnt;
        k=cnt-k;
        curr->next=head;
        while(k--){
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};
