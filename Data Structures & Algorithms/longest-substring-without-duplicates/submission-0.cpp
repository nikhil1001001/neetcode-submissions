class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        int ans = 0;
        unordered_set<char> c;
        while(j<s.size()){
            while(c.find(s[j]) != c.end()){
                c.erase(s[i]);
                i++;
            }
            c.insert(s[j]);
            j++;
            ans = max(ans, j-i);
        }
        return ans;
    }
};
