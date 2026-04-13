class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        int first = 0, last = nums.size();
        while(first < last)
        {
            int mid = (first + last)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                last = mid;
            else
                first = mid + 1;
        }
        return -1;
    }
};
