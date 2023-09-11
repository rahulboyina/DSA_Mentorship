74. Search in a 2D matrix 

URL : https://leetcode.com/problems/search-a-2d-matrix/description/

Code : 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag=false;
        int row=0;
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]<=target && matrix[i][matrix[i].size()-1]>=target)
            {flag=true;}
            if(flag)
            {
                for(int j=0;j<matrix[i].size();++j)
                {
                    if(matrix[i][j]==target) return true;
                }

                return false;
            }
        }
        return false;
    }
};