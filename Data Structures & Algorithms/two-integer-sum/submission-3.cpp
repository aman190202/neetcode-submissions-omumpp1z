class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
        std::unordered_map<int, int> nums_r;
        for(int i = 0 ; i<nums.size(); i++)
        {
            int r = target - nums[i];
            if(nums_r.find(nums[i])==nums_r.end())
                nums_r[r] = i;
            else
                return {nums_r[nums[i]],i};
        }
        return {0,1};
        
    }
};
