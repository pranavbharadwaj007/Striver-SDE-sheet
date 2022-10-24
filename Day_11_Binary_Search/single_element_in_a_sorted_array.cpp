class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int lo=0;
        int hi=nums.size()-1;
        int mid;
        if(hi==0){
            return nums[0];
            
        }
        else if(nums[0]!=nums[1]){
            return nums[0];
        }
        else if(nums[hi]!=nums[hi-1]){
            return nums[hi];
        }
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            if(((mid%2==0) && nums[mid]==nums[mid+1])||(((mid%2)==1)&&nums[mid]==nums[mid-1])){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        return -1;
    }
};
