class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet(nums.begin(), nums.end());
        int max = 0;
        for(const int& num : nums)
        {
            int curr = num;
            int seq = 1;
            if(hashSet.find(num - 1) != hashSet.end())
                continue;
            
            while(hashSet.find(++curr)!=hashSet.end())
                seq++;
            if(seq > max)
                max = seq;
        }
        return max;
        
    }
};
