class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        l = ''
        strs = sorted(strs)
        for i in range(len(strs[0])):
            if(strs[0][i] != strs[len(strs)-1][i]):
                return l
            else:
                l += strs[0][i]
        return l