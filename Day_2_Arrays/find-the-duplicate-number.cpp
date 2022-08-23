
// https://takeuforward.org/data-structure/find-the-duplicate-in-an-array-of-n1-integers/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
        int slow=nums[0];
        int fast=nums[0];
        
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
            
        fast=nums[0];
        while(fast!=slow){
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow;
    }
};

we use find cycle in linked list approach by using 2 pointer fast and slow
