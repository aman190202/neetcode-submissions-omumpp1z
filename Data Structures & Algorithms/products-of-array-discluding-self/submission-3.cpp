class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int> toRight(nums.size(),1);
        vector<int> toLeft(nums.size(),1);
        int curr = 1;
        int curr2 = 1;
        int length = nums.size();
        for(int i = 0; i < length; i++) {
            toRight[i] = curr;   // store FIRST
            curr *= nums[i];     // multiply AFTER
        }

        // suffix (right products)
        for(int i = length-1; i >= 0; i--) {
            toLeft[i] = curr2;        // store FIRST
            curr2 *= nums[i];         // multiply AFTER
        }


        vector<int> ans;
        for(int i = 0; i < length; i++)
            ans.push_back(toRight[i] * toLeft[i]);

        return ans;
    }
};
