
// Link : https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int maxi=0;
        for(auto it:nums){
            if(it==1){
                curr++;
                maxi=max(maxi,curr);
            }else{
                curr=0;
            }
        }
        return maxi;
    }
};
