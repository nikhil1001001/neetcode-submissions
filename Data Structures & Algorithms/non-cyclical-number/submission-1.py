class Solution:
    def summ(self, p: int) -> int:
        nums = list(str(p))
        x = 0
        for i in range(len(nums)):
            x = x + int(nums[i])**2
        return x
    
    def isHappy(self, n: int) -> bool:
        # nums = list(str(n))
        # p = 0
        # for i in range(len(nums)):
        #     p = p**2 + nums[i]**2
        container = []
        while True:
            new_num = self.summ(n)
            container.append(new_num)
            if new_num == 1:
                return True
            if len(set(container)) != len(container):
                return False
            n = new_num