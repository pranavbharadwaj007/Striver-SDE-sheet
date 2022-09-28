
// Link : https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

class Solution
{
    public:
    static bool comp(Item a,Item b){
        double r1=((double)a.value)/((double)a.weight);
        double r2=((double)b.value)/((double)b.weight);
        
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,comp);
        int currweigh=0;
        double finalval=0.0;
        for(int i=0;i<n;i++){
            if(currweigh+arr[i].weight<=W){
                currweigh+=arr[i].weight;
                finalval+=arr[i].value;
            }
            else{
                int rem=W-currweigh;
                finalval+=((arr[i].value/(double)arr[i].weight))*(double)rem;
                break;
            }
        }
        return finalval;
    }
        
};
