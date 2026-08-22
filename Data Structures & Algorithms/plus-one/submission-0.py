class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        number = 0
        new_digits = []
        for i in digits:
            number = number*(10**len(str(i))) + i
        number = number+1
        for j in range(len(str(number))):
            new_digits.append(number%10)
            number = int(number/10)
        new_digits.reverse()
        return new_digits
