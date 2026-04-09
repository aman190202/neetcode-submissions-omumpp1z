class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> res;
        const unordered_set<string> ops = {"+", "-", "*", "/"};
        for(const string& c : tokens)
        {
            if (!ops.count(c))
                res.push(stoi(c));
            else
            {
                int num2 = res.top();
                res.pop();
                int num1 = res.top();
                res.pop();
                if(c == "+")
                    res.push(num1 + num2);
                else if(c == "*")
                    res.push(num1 * num2);
                else if(c == "/")
                    res.push(num1/num2);
                else
                    res.push(num1 - num2);
                std::cout<<res.top()<<" ";
            }
        }
        return res.top();
    }
};
