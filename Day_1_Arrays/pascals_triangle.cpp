
// https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};

Intuition: When you see the image above, you get a pretty good idea of what you are supposed to do here. 
Think about the image as a matrix now where each line is basically a row in the matrix. So, first things first, 
if you are at the edge of the matrix, the value is 1, that’s for sure. Now, what about the inner elements? Well, any inner element is 
obtained by doing the sum of the 2 values present in the row just above it, i.e., if the element is at index (i, j), then matrix[i][j] 
can be obtained by doing matrix[i – 1][j – 1] + matrix[i – 1][j].
  
 variant : Pascals-triangle-ii
 
 // https://leetcode.com/problems/pascals-triangle-ii/
 
 class Solution {
public:
    vector<int> getRow(int row) {
        vector<int>ans;
        long long val=1;
        for(int j=0;j<=row;j++){
            ans.push_back(val);
            val=val*(row-j)/(j+1);
            cout<<val<<endl;
        }
        return ans;
    }
};

Note : i represent row j represent coloumn
we can either return the last row from the first approach or we can represent
by each row with iCj (i combination j) we also know that by multiplying with certain factor we can get next element that is iCj+1
by calculating we get factor equals i-j/j+1;
