class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = word1.size();
        int b = word2.size();
        string s;
        int j = min(a,b);
        for(int i=0; i<min(a,b); i++){
            s.push_back(word1[i]);
            s.push_back(word2[i]);
        }
        
        if(a>b){
            for(int i=b; i<a; i++){
                s.push_back(word1[i]);
            }
        }
        else{
            for(int i=a; i<b; i++){
                s.push_back(word2[i]);
            }
            
        }
        return s;
    }
};