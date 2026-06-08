class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); 
        int low = 0, high = m - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(matrix[mid][0] > target) high = mid - 1;
            else if(matrix[mid][0] == target) return true;
            else low = mid + 1;
        }
        if(high < 0) return false;
        int row = high;
        int n = matrix[row].size();
        low = 0;
        high = n - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(matrix[row][mid] == target) return true;
            if(matrix[row][mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};