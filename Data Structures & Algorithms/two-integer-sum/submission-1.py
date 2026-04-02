class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)-1):
            t1 = target - nums[i]
            if t1 in nums[i+1:]:
                return [i,nums[i+1:].index(t1)+i+1]