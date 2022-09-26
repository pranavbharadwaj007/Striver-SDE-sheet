
// Link : https://leetcode.com/problems/copy-list-with-random-pointer/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        //step 1
        Node* iter=head;
        Node* front=head;
        while(iter!=NULL){
            front=iter->next;
            Node* curr=new Node(iter->val);
            iter->next=curr;
            curr->next=front;
            iter=front;
        }
        // step 2
        iter=head;
        while(iter!=NULL){
           if(iter->random!=NULL) iter->next->random=iter->random->next;
            iter=iter->next->next;  
        }
        
        // step 3
        iter=head;
        Node* dummy=new Node(0);
        Node* cpy=dummy;
        
        while(iter!=NULL){
            Node* fron=iter->next->next;
            cpy->next=iter->next;
            iter->next=fron;
            cpy=cpy->next;
            iter=fron;
        }
        return dummy->next;
    }
};
