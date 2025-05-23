class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size(), n = matrix[0].size();
            int x = 0, y = n - 1;
            while (x < m and y >= 0) 
            {
                if (matrix[x][y] == target) return true;
                else if (matrix[x][y] > target) y --; else x ++;
            }
            return false;
        }
    };
    