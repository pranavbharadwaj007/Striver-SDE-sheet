
// Link : https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
        int num1=-1,num2=-1,cnt1=0,cnt2=0,i;
        for(i=0;i<n;i++){
            if(nums[i]==num1){
                cnt1++;
            }
            else if(nums[i]==num2){
                cnt2++;
            }
            else if(cnt1==0){
                num1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0){
                num2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ans;
        int ans1=0,ans2=0;
        for(int j=0;j<n;j++){
            if(nums[j]==num1){
                ans1++;
            }
            else if(nums[j]==num2){
                ans2++;
            }
            
        }
        if(ans1>n/3){
            ans.push_back(num1);
        }
         if(ans2>n/3){
            ans.push_back(num2);
        }
        return ans;
    }
};
