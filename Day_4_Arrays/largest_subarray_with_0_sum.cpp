
// Link : https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

    int maxLen(vector<int>&A, int n)
    {   
       map<int,int>mp;
       int sum=0;
       int maxi=0;
       for(int i=0;i<n;i++){
           sum+=A[i];
           if(sum==0)maxi=i+1;
           
           if(mp.find(sum)!=mp.end()){
               maxi=max(maxi,i-mp[sum]);
           }else{
               mp[sum]=i;
           }
       }
       return maxi;
    }
