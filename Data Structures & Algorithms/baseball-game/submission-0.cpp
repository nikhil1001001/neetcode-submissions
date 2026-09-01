class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans = 0;
        for (const string& op : operations){
            if(op== "+"){
                int top = s.top();
                s.pop();
                int new_top = top + s.top();
                s.push(top);
                s.push(new_top);
                ans += s.top();
            }
            else if(op=="C"){
                ans -= s.top();
                s.pop();
            }
            else if(op=="D"){
                ans += 2*s.top();
                s.push(2*s.top());
            }
            else{
                s.push(stoi(op));
                ans += s.top();
            }
        }
        
        return ans;
    }
};