class Solution {
public:
    bool validPalindrome(string s) {
        int first = 0, last = s.size()-1;
        if(last <2) return true;
        int count = 0;
        while(first<last){
            if(s[first] != s[last]){
                return pal(s, first +1, last) || pal(s, first,last -1);
            }
            first ++;
            last--;
        }
        return true;
    }
    bool pal(const string& s, int first, int last){
        while(first<last){
            if(s[first] != s[last]){
                return false;
            }
            first++;
            last--;
        }
        return true;
    }
};