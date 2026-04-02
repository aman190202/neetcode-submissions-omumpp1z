#include <string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string code; 
        for(const string& s : strs)
            code += to_string(s.length()) + '#' + s;
        return code;

    }

    vector<string> decode(string s) {
    vector<string> ans;
    int i = 0;
    while(i < s.size()) {
        int j = i;  // ← start at i, not i+1
        while(j < s.size() && isdigit(s[j])) j++;
        // j now points to '#'
        int length = stoi(s.substr(i, j - i));  // ← substr from i
        ans.push_back(s.substr(j + 1, length));
        i = j + 1 + length;
    }
    return ans;
}
};
