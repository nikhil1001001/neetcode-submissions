class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = list(set(nums))
        max = 0
        num = 0
        for i in range (len(n)):
            k=0
            for j in range (len(nums)):
                if n[i] == nums[j]:
                    k+=1
                if k > max:
                    max = k
                    num = n[i]
        return num