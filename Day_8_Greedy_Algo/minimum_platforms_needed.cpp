
// Link : https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int res=1,currplat=1;
    	int i=1,j=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        i++;
    	        currplat++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        j++;
    	        currplat--;
    	    }
    	    res=max(res,currplat);
    	}
    	return res;
    }
