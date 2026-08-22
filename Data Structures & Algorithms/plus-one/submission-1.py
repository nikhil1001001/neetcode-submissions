class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # Start from the last index, move backwards to index 0, stepping by -1
        for i in range(len(digits) - 1, -1, -1):
            # If the current digit is a 9, it will roll over to 0
            if digits[i] == 9:
                digits[i] = 0
            else:
                # If it's not a 9, just add 1 and we are done!
                digits[i] += 1
                return digits
        
        # If the loop finishes, it means the number was all 9s (e.g., [9, 9, 9] -> [0, 0, 0])
        # We just need to prepend a 1 to the front
        return [1] + digits