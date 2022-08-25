
// https://takeuforward.org/data-structure/search-in-a-sorted-2d-matrix/

// m=row n=col

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int m=matrix.size();
        int n=matrix[0].size();
        int lo=0;
        int hi=(m*n)-1;
        while(lo<=hi){
            int mid=(lo+(hi-lo)/2);
            if(matrix[mid/n][mid%n]==target){
                return true;
            }
            else if(matrix[mid/n][mid%n]<target){
            lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return false;
    }

Intuition: As it is clearly mentioned that the given matrix will be row-wise and column-wise sorted, 
we can see that the elements in the matrix will be in a monotonically increasing order. So we can apply binary 
search to search the matrix. Consider the 2D matrix as a 1D matrix having indices from 0 to (m*n)-1 and apply binary search.
  
Time complexity: O(log(m*n))
Space complexity: O(1)
