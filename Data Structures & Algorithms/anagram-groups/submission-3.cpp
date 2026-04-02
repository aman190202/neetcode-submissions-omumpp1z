class Solution {
public:
    vector<int> convertHash(string& s)
    {
        vector<int> hashMap(26,0);
        for(auto i : s)
            hashMap[i - 'a'] += 1;
        return hashMap;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> result;
    
    for (const string& s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        result[key].push_back(s);
    }
    
    vector<vector<string>> ans;
    ans.reserve(result.size());
    for (auto& [k, v] : result)
        ans.push_back(move(v));
    
    return ans;
}
};
