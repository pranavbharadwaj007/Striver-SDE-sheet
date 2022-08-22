
//    https://takeuforward.org/data-structure/set-matrix-zero/

void setZeros(vector<vector<int>> &mat)
{
	int n=mat.size();
    int m=mat[0].size();
    int col0=1;
    for(int i=0;i<n;i++){
        if(mat[i][0]==0)col0=0;
        for(int j=1;j<m;j++){
            if(mat[i][j]==0){
                mat[i][0]=0;
                mat[0][j]=0;
            }
        } 
    }
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=1;j--){
            if(mat[i][0]==0 || mat[0][j]==0){
                mat[i][j]=0;
            }
        }
        if(col0==0)mat[i][0]=0;
    }
}

Intuition: Instead of taking two dummy arrays we can use the first row and column of the matrix for the same work. 
This will help to reduce the space complexity of the problem. While traversing for the second time the first row and column will be computed first, 
which will affect the values of further elements that’s why we traversing in the reverse direction.

Approach:Instead of taking two separate dummy array,take first row and column of the matrix as the array for 
checking whether the particular column or row has the value 0 or not.Since matrix[0][0] are overlapping.Therefore take separate variable col0(say) to check 
if the 0th column has 0 or not and use matrix[0][0] to check if the 0th row has 0 or not.Now traverse from last element to the first element and 
check if matrix[i][0]==0 || matrix[0][j]==0 and if true set matrix[i][j]=0,else continue.
