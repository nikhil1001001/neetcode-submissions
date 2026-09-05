class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        
        int j=0;
        while(j<asteroids.size()){
            
            while(j<asteroids.size() && !st.empty() && asteroids[j] <0 && st.top() > 0){
                if(!st.empty() && abs(asteroids[j]) == st.top()){
                    st.pop();
                    j++;
                }
                else if(j<asteroids.size() && abs(asteroids[j]) < st.top()){
                    j++;
                }
                else if(j<asteroids.size() && abs(asteroids[j]) > st.top()){
                    
                    st.pop();
                    
                    
                }
            }
            if(j<asteroids.size()){
                st.push(asteroids[j]);
            }
            
            // else{
            //     st.push(asteroids[j]);
            // }
            j++;
        }
        vector<int> arr;
        while (!st.empty()) {
           arr.push_back(st.top());
           st.pop();
}
        reverse(arr.begin(), arr.end());
        return arr;
    }
};