
// Link : https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        vector<vector<int>>res;
        if(num.empty()){
            return res;
        }
        int n=num.size();
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target2=target-num[j]-num[i];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int sum2=num[front]+num[back];
                    if(sum2<target2){
                        front++;
                        
                    }
                    else if(sum2>target2){
                        back--;
                    }
                    else{
                        vector<int>quad(4,0);
                        quad[0]=num[i];
                        quad[1]=num[j];
                        quad[2]=num[front];
                        quad[3]=num[back];
                        res.push_back(quad);
                        
                        while(front<back && num[front]==quad[2])++front;
                        
                          while(front<back && num[back]==quad[3])--back;
                    }
                }
                while(j+1<n && num[j+1]==num[j])++j;
            }
            while(i+1<n && num[i+1]==num[i])++i;
        }
        return res;
    }
};
 
