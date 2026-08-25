class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        vector<int> arr;
        for(int i=0; i<nums.size()-k; i++){
            arr.push_back(nums[i]);
        }
        for(int i=0; i<k; i++){
            nums[i] = nums[nums.size()-k+i];
        }
        for(int i = 0; i<nums.size()-k; i++){
            nums[k+i] = arr[i];
        }
    }
};