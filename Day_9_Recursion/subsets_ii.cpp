
// Link : https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    void helper(int ind,vector<int>& s,vector<int>& ds,vector<vector<int>>&res){
        res.push_back(ds);
        for(int i=ind;i<s.size();i++){
            if(i!=ind && s[i]==s[i-1])continue;
            ds.push_back(s[i]);
            helper(i+1,s,ds,res);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& s) {
        sort(s.begin(),s.end());
        vector<vector<int>>res;
        vector<int>ds;
        helper(0,s,ds,res);
        return res;
    }
};
