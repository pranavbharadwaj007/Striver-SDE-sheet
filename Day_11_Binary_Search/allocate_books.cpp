bool ispos(int mid,vector<int> &A, int B){
    int alloc=1;
    int res=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>mid)return false;
        if(res+A[i]<=mid){
            res+=A[i];
        }else{
            alloc++;
            res=A[i];
        }
    }
    return alloc<=B;
}

int Solution::books(vector<int> &A, int B) {
    if(B>A.size())return -1;
    int low=1e9;
    int high=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<low)low=A[i];
        high+=A[i];
    }
    int res=0;
    while(low<=high){
        int mid=(low+high)>>1;
        if(ispos(mid,A,B)){
            res=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return res;
}
