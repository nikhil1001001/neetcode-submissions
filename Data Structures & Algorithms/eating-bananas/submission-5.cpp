class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while(low<=high){
            int mid = (high + low)/2;

            long long total_time = 0;
            for(int p: piles){
                total_time += (p + mid - 1LL) / mid;
            }
            if(total_time <= h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
