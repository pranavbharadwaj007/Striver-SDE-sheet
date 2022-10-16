// https://leetcode.com/problems/permutations/

class Solution {
public:
	 void findPermutation(vector<int> nums, vector<vector<int>> &result,int index){
        if(index >= nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            findPermutation(nums, result, index+1);
            swap(nums[index], nums[i]); 
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        findPermutation(nums, result ,0);
        return result;
    }
};
