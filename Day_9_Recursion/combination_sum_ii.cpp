class Solution {
public:
    void helper(int ind,int target,vector<int>&ds,vector<vector<int>>&ans,vector<int>& cand){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<cand.size();i++){
            if(ind!=i && cand[i]==cand[i-1])continue;
                if(cand[i]>target)break;
                ds.push_back(cand[i]);
                helper(i+1,target-cand[i],ds,ans,cand);
                ds.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(),cand.end());
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,target,ds,ans,cand);
        return ans;
    }
};
