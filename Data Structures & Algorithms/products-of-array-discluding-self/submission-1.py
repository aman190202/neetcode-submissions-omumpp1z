class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        front = []
        x = 1
        for i in range(len(nums)):
            x *= nums[i]
            front.append(x)
        back = []

        y = 1
        for i in range(len(nums)-1,-1,-1):
            y *= nums[i]
            back.append(y)
        back = back[::-1]

        ans = []
        for i in range(len(nums)):
            f = 1
            b = 1
            if(i-1 != -1):
                f = front[i-1]
            if(i+1 != len(nums)):
                b = back[i+1]
            ans.append(f*b)
        return ans


        