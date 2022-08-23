
// Link : https://takeuforward.org/data-structure/rotate-image-by-90-degree/

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        
    }
};

Intuition: By observation, we see that the first column of the original matrix is the reverse of the first row of the rotated matrix, 
so that’s why we transpose the matrix and then reverse each row, and since we are making changes in the matrix itself space complexity gets reduced to O(1).

Approach:
Step1: Transpose of the matrix. (transposing means changing columns to rows and rows to columns)
Step2: Reverse each row of the matrix.
