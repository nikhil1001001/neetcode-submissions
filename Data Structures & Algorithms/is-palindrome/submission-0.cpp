class Solution {
public:
    bool notValid(char a){
        if(a<='Z' && a>='A')return false;
        if(a<='z' && a>='a')return false;
        if(a<='9' && a>='0')return false;
        return true;
    } 

    bool isPalindrome(string s) {
        int n = s.length();
        int i =0, j = n-1;

        while(i<j){
            if(s[i]==' ' || notValid(s[i])){
                i++;
                continue;
            }
            if(s[j]==' ' || notValid(s[j])){
                j--;
                continue;
            }
            if(s[i]!=s[j]){
                int x=0,y=0;
                if((s[i]<='9' && s[i]>='0') || (s[j]<='9' && s[j]>='0'))return false;
                if(s[i]<='Z' && s[i]>='A') x= s[i]-'A';
                if(s[i]<='z' && s[i]>='a') x= s[i]-'a';
                if(s[j]<='Z' && s[j]>='A') y= s[j]-'A';
                if(s[j]<='z' && s[j]>='a') y= s[j]-'a';
                
                if(x==y) {
                    i++;
                    j--;
                    continue;
                }
                //cout<<i<<" "<<j<<endl;
                //cout<<x<<" "<<y<<endl;
                //cout<<s[i]<<" "<<s[j]<<endl;
                return false;
                //cout<<1<<endl;
            }
            i++;
            j--;
        }
        return true;
    }
};
