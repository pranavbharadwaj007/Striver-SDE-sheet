vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
 vector<int>ans;          
 priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> >pq;
      for(int i=0;i<k;i++)
          pq.push({arr[i][0],make_pair(0,i)});
   
      while(!pq.empty()){
           auto x=pq.top();
           pq.pop();
          
           int val=x.first;
           ans.push_back(val);
           int idx=x.second.first;
           int pos=x.second.second;
           
           if(idx+1<arr[pos].size()){
               pq.push({arr[pos][idx+1],{idx+1,pos}});
           }
      }
   return ans; 
}
