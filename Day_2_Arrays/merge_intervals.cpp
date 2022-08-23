
// Link : https://takeuforward.org/data-structure/merge-overlapping-sub-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> res;
        sort(inter.begin(),inter.end());
        res.push_back(inter[0]);
        for(int i=1;i<inter.size();i++){
            if(res.back()[1]>=inter[i][0]){
                res.back()[1]=max(res.back()[1],inter[i][1]);
            }else{
                res.push_back(inter[i]);
            }
        }
        return res;
    }
};

Approach: Linearly iterate over the array if the data structure is empty insert the interval in the data structure. 
If the last element in the data structure overlaps with the current interval we merge the intervals by updating the last element in the 
data structure, and if the current interval does not overlap with the last element in the data structure simply insert it into the data structure.

Intuition: Since we have sorted the intervals, the intervals which will be merging are bound to be adjacent. We kept on merging simultaneously as 
we were traversing through the array and when the element was non-overlapping we simply inserted the element in our data structure.
