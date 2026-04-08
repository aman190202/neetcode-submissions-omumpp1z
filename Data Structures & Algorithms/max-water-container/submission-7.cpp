class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int distance, height, capacity;
        int max = -1;
        while(l < r)
        {
            distance = abs(l - r);
            height = min(heights[l],heights[r]);
            capacity = distance * height ;
            if (capacity > max) 
            {
                std::cout<<l<<" "<<r<<" "<<capacity<<" "<<distance<<" "<<height<<std::endl;
                max = capacity;
            }
            if (heights[l] < heights[r]) l++;
            else r--;
        }
        return max;
    }
};
