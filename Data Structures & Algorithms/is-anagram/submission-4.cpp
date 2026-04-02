class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> an1;
        unordered_map<char, int> an2;
        for(int i; i<s.size(); i++)
        {
            an1[s[i]]++;
            an2[t[i]]++;
        }
        return an1==an2;
    }
};
