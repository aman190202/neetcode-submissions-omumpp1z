class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::stack<pair<int,int>> table;
        // position, height
        table.push({0,heights[0]});
        int maxArea = 0;
        int newPos = 0;
        for(int i = 1 ; i<heights.size() ; i++)
        {
            newPos = i;
            while(!table.empty() && heights[i] < table.top().second)
            {
                auto curr = table.top();
                int area = curr.second * (i - curr.first);
                if(area > maxArea)
                    maxArea = area;
                newPos = curr.first;
                table.pop();   
            }
            table.push({newPos,heights[i]});
        }
        while(!table.empty())
        {
            int area = table.top().second * (heights.size() - table.top().first);
            if(area > maxArea) maxArea = area;
            table.pop();
        }
        return maxArea;
    }
};
