class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = 0;
        int i = 0, j = heights.size()-1;
        while(i<j){
            int n = (j-i)*min(heights[i], heights[j]);
            maxi = max(maxi, n);
            if(heights[i]<heights[j]){
                i = i+1;
            }
            else{
                j = j-1;
            }
        }
        return maxi;
    }
};
