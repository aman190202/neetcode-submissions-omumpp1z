class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int , int> hash_table;
        for(int num : nums)
            hash_table[num]+= 1 ;
        if(hash_table.size()==nums.size())
            return false;
        return true;
    }
};