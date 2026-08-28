class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mr;
        for(int i=0; i< nums.size(); i++){
            if(mr.count(nums[i]) && (i - mr[nums[i]]<=k)){
                return true;
            }
            mr[nums[i]]=i;
        }
        return false;
    }
};