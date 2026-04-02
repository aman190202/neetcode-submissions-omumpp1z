class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> s_count,t_count;
        for(int i = 0; i < s.size(); i++){
            s_count[s[i]]++;
            t_count[t[i]]++;
        }
        if(s_count!=t_count) return false;
            return true;
    }
};