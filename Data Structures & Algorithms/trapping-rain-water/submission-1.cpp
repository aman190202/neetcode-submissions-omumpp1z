class Solution {
public:
    int trap(vector<int>& height) {
        int curr1 = height[0];
        int curr2 = height[height.size() - 1];
        vector<int> left (height.size());
        vector<int> right (height.size());
        int sum_final = 0;
        
        for(int i = 1 ; i<height.size();i++)
        {
            if(curr1 <= height[i]) curr1 = height[i];
            else left[i] = curr1 - height[i];
            if(curr2 <= height[height.size() - 1 - i]) curr2 = height[height.size() - 1 - i];
            else right[height.size() - 1 - i] = curr2 - height[height.size() - 1 - i];
        }

        for(int i = 0 ; i<height.size(); i++)
            sum_final += min(left[i],right[i]);

        return sum_final;
    }
    
};


// 0,0,2,0,2,3,2,0,1,2
// 3 1 3 0 2 3 2 0 0 0
// 0,0,2,0,2,3,2,0 0 0