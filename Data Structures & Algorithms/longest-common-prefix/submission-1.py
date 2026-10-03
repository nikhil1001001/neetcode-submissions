class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        ans = ""
        minimum = min(strs, key=len)
        for i in range(len(minimum)):
            for j in range(len(strs)-1):
                if strs[j][i] != strs[j+1][i]:
                    return ans
            ans += strs[0][i]
        return ans                    
