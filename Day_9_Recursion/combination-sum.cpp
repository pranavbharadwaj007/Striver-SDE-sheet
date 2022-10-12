class Solution {
public:
    void helper(int ind,vector<vector<int>>&ans,vector<int>&ds,vector<int>& cand,int target){
        if(ind==cand.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(cand[ind]<=target){
            ds.push_back(cand[ind]);
            helper(ind,ans,ds,cand,target-cand[ind]);
            ds.pop_back();
        }
        helper(ind+1,ans,ds,cand,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,ans,ds,candidates,target);
        return ans;
    }
};
