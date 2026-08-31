class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int temp =0, ans=nums.size()+1;
        int i=0, j=0;
        while(j<nums.size()){
            temp += nums[j];
            j++;
  
            while(temp>=target){
                ans = min(ans, j-i);
                temp -= nums[i];
                i++;
            }
        }
        if(ans==nums.size()+1) return 0;
        return ans;
    }
};