class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a,b;
        for (char x : s)
            a[x]++;
        for(char x:t)
            b[x]++;
        if(a==b)
            return true;
        return false;
    }
};
