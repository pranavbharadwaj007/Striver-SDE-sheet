
// Link : https://practice.geeksforgeeks.org/problems/subset-sums2234/1

class Solution
{
public:
    void helper(vector<int> &ans,int ind, int n,int sumi,vector<int>&arr){
        if(ind==n){
            ans.push_back(sumi);
            return;
        }
        helper(ans,ind+1,n,sumi+arr[ind],arr);
        helper(ans,ind+1,n,sumi,arr);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        int sumi=0;
        helper(ans,0,N,sumi,arr);
        return ans;
    }
};
