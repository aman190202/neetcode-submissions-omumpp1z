class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res (temperatures.size());
        std::stack<int> tempstack;
        tempstack.push(0);
        for(int i = 1 ; i<temperatures.size() ; i++)
        {
            while(!tempstack.empty() && temperatures[tempstack.top()] < temperatures[i])
            {
                res[tempstack.top()] = i - tempstack.top();
                tempstack.pop();
            }
            tempstack.push(i);
        }
        return res;
    }
};


/* The idea is that numbers go in a stack until something 
greater than time is not introduced ; if introduced, the numbers get
kicked out, else the number stays. every iteration the

insert indexes into the list, if number greater than index 
*/