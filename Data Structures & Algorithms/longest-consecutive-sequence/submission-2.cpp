class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet(nums.begin(), nums.end());
        int max = 0;
        for(const int& num : hashSet)
        {
            int curr = num, seq = 1;
            if(hashSet.count(num - 1)) continue;
            while(hashSet.count(++curr)) seq++;
            max = std::max(seq,max);
        }
        return max;
        
    }
};
