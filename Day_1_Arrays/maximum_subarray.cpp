
// Link : https://takeuforward.org/data-structure/kadanes-algorithm-maximum-subarray-sum-in-an-array/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=-1e9;
        for(auto it:nums){
           sum+=it;
           if(maxi<sum)maxi=sum;
            if(sum<0)sum=0;
        }
        return maxi;
    }
};
