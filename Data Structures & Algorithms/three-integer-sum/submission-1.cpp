class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> uniqueTriplets;
        int n = nums.size();

        for (int f = 0; f < n - 2; ++f)
        {
            int s = f + 1;
            int t = n - 1;

            while (s < t)
            {
                int sum = nums[f] + nums[s] + nums[t];
                if (sum == 0)
                {
                    uniqueTriplets.insert({nums[f], nums[s], nums[t]});
                    s++;
                    t--;
                }   
                else if (sum > 0)
                    t--;
                else
                    s++;
            }
        }

        return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
    }
};