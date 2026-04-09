class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> res;
        for(const string& c : tokens)
        {
            if (c.size() > 1 || isdigit(c[0]))
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
            }
        }
        return res.top();
    }
};
