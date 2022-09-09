
// Link : https://leetcode.com/problems/reverse-nodes-in-k-group/

class Solution {     
public:
    ListNode* th=NULL;
      ListNode* tt=NULL;
    int length(ListNode* head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
 
    void addFirst(ListNode* node){
        if(th==NULL){
            th=node;
            tt=node;
        }else{
            node->next=th;
            th=node;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode* oh=NULL;
         ListNode* ot=NULL;
        int len=length(head);
     
        ListNode* curr=head;
        while(len>=k){
            int temk=k;
            while(temk-- > 0){
                ListNode* ford=curr->next;
                curr->next=NULL;
                addFirst(curr);
                curr=ford;
            }
            if(oh==NULL){
                oh=th;
                ot=tt;
                
            }
            else{
                ot->next=th;
                ot=tt;
            }
            th=NULL;
            tt=NULL;
            len=len-k;
        }
        ot->next=curr;
        return oh;
      
    }
};
