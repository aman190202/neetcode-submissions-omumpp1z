class Solution {
public:

    string encode(vector<string>& strs) 
    {   
        string encoded="";
        for(const string& str : strs)
        {
            int length = str.size();
            encoded += to_string(length)+"#"+str;
        }
        return encoded;

    }
    int nextHash(string s, int i)
    {
        for(int j = i ; j<s.size();j++)
            if(s[j]=='#')
                return j;
        return -1;
    }

    int convNum(const string& s)
    {
        int num = 0;
        for (int i = 0; i < s.size(); ++i)
            num = num * 10 + (s[i] - '0');
        return num;
    }

    vector<string> decode(string s) 
    {
        vector<string> ans;
        int i = 0;
        while(i<s.size())
        {
            int hash_pos = nextHash(s,i);
            string num = s.substr(i,hash_pos-i);
            if(hash_pos != -1)
            {
                int word_length = convNum(num);
                string add = s.substr(hash_pos + 1, word_length);
                ans.push_back(add);
                i = hash_pos + 1 + word_length;  
            }
        }
        return ans;
    }
};
