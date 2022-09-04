
// Link : https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        int cnt=0;
        for(auto it:nums){
            if(!st.count(it-1)){
                int currno=it;
                int currst=1;
                while(st.count(currno+1)){
                    currno+=1;
                    currst+=1;
                }
                cnt=max(cnt,currst);
            }
        }
        return cnt;
    }
};
