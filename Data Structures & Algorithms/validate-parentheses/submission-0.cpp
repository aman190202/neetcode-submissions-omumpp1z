class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char,char> closetoOpen = {{')','('}, {']','['},{'}','{'}};
        for(const char& c : s)
        {
            if(closetoOpen.count(c))
            {
                if(!stack.empty() && stack.top() == closetoOpen[c])
                    stack.pop();
                else
                    return false;
            }
            else
            {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
