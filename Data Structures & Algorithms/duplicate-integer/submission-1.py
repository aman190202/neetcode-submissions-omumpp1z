class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        if(len(nums)==len(set(nums))):
            return False
        return True

        # for i in range(len(nums)-1):
        #     if nums[i] in nums[i+1:]:
        #         return True
        
        # return False
        