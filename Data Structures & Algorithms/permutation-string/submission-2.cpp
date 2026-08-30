class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        sort(s1.begin(), s1.end());
        int i=0, j=s1.size();
        while(i+j<=s2.size()){
            string sub = s2.substr(i,j);
            sort(sub.begin(), sub.end());

            if(sub==s1) return true;
            i++;
        }
        return false;
        
    }
};
