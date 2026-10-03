class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        n = len(nums)
        p = len(set(nums))
        if n==p:
            return False
        else:
            return True