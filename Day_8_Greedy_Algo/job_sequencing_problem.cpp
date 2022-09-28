
// Link: https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#

class Solution 
{
    static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
    public:
   
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comp);
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        int cnt=0;
        int sumi=0;
        vector<int>vec(maxi+1,-1);
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(vec[j]==-1){
                    vec[j]=arr[i].id;
                    cnt++;
                    sumi+=arr[i].profit;
                    break;
                }
            }
        }
     vector<int>res={cnt,sumi};
     return res;
    } 
};
