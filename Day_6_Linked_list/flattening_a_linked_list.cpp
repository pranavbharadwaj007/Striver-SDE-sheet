
// Link : https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

Node* merge(Node* left,Node* right){
    Node* temp=new Node(0);
    Node* res=temp;
    while(left!=NULL && right!=NULL){
        if(left->data<=right->data){
            res->bottom=left;
            res=res->bottom;
            left=left->bottom;
        }
        else{
           res->bottom=right;
            res=res->bottom;
            right=right->bottom; 
        }
    }
    if(left)res->bottom=left;
    else res->bottom=right;
    return temp->bottom;
    
    
}
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL){
       return root;
   }
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
}
