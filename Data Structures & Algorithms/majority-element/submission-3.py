class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums = sorted(nums)
        n = len(nums)
        # if(n%2==0):
        #     return nums[n/2]
        # else:
        #     return nums[(n//2) + 1]
        return nums[n//2]