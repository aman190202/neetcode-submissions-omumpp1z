class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            auto j = find(nums.begin() + i + 1,nums.end(), target - nums[i]);
            if(j!=nums.end())
                return {i,j - nums.begin()};
        }
        
    }
    
};
