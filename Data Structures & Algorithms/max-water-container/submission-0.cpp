class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int> maxwater;
        int l = 0;
        int r = heights.size() - 1;
        int res = 0;
        while(l < r)
        {
            int height = min(heights[r],heights[l]);
            int distance = r - l;
            int water = height * distance ; 
            res = max(res,water);
            if(heights[l] >= heights[r])
                r--;
            else 
                l++;
        }
        return res;
    }
};
