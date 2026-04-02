class Solution {
public:
    vector<int> convertHash(string s)
    {
        vector<int> hashMap(26,0);
        for(auto i : s)
            hashMap[i - 'a'] += 1;
        return hashMap;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        map<vector<int>, vector<string>> result;
        for(string s : strs)
        {
            auto hash = convertHash(s);
            result[hash].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& i : result)
            ans.push_back(i.second);
        return ans;
    }
};
