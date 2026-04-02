class Solution {
public:
    string returnID(string s)
    {
        vector<int> count(26,0);
        for(const char& c : s)
            count[c - 'a']++;
        string ID = to_string(count[0]);
        for(int i = 0; i<26; i++)
            ID += ',' + to_string(count[i]);
        return ID;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> mapping;
        for(const string& s : strs)
            mapping[returnID(s)].push_back(s);
        vector<vector<string>> ans;
        for(const auto& pair : mapping)
            ans.push_back(pair.second);
        return ans;
    }
};
