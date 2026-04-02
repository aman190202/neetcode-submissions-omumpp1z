class Solution {
public:
vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int> freq;
    for(const int& n : nums)
        freq[n]++;

    // bucket[i] = list of numbers with frequency i
    vector<vector<int>> bucket(nums.size() + 1);
    for(const auto& [val, cnt] : freq)
        bucket[cnt].push_back(val);

    vector<int> ans;
    for(int i = bucket.size() - 1; i >= 0 && ans.size() < k; i--)
        for(int n : bucket[i])
            ans.push_back(n);

    return ans;
}
};
