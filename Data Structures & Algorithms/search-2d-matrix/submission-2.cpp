class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size();
        int row;
        while(l < r)
        {
            int mid = (l + r)/2;
            if(matrix[mid][0] == target)
                return true;
            else if(matrix[mid][0] < target)
                l = mid + 1;
            else
                r = mid;   
        }
        row = l - 1;
        if(!l)
            return false;
        l = 0, r = matrix[0].size();
        while(l < r)
        {
            int mid = (l + r)/2;
            if(matrix[row][mid] == target)
                return true;
            else if(matrix[row][mid] < target)
                l = mid + 1;
            else
                r = mid;   
        }
        return false;
    }
};
