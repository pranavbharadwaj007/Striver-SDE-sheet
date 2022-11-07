bool isPossible(vector<int> pos , int n ,  int c,int mid){
    int prev=pos[0];
    int cnt=1;
    for(int i=1;i<n;i++){
        if(pos[i]-prev>=mid){
            cnt++;
            prev=pos[i];
        }
    }
    if(cnt>=c)return true;
    return false;
}
int AggressiveCows(vector<int> pos , int n ,  int c){
	sort(pos.begin(),pos.end());
    int low=1;
    int high=pos[n-1]-pos[0];
    int res=0;
    while(low<=high){
        int mid=(low+high)>>1;
        if(isPossible(pos,n,c,mid)){
            res=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return res;
}
