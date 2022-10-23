double mult(double num,int n){
    double res=1.0;
    for(int i=1;i<=n;i++){
        res=res*num;
    }
    return res;
}
double findNthRootOfM(int n, int m) {
	double low=1;
    double high=m;
    double diff=(1e-8);
    
    while((high-low)>diff){
        double mid=(high+low)/2.0;
        if(mult(mid,n)<m){
            low=mid;
        }else{
            high=mid;
        }
    }
    return low;
}
