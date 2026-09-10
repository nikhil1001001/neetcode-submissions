class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        int count = -1;
        for(int i=0; i<nums.size(); i++){
            if(st.count(nums[i]) == 0){
                st.insert(nums[i]);
            }
            else{
                count = nums[i];
            }
        }
        return count;
    }
};
