class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size(), 0);
        int multiply = 1;
        int count = 0;
        int index = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count++;
                index = i;
                continue;
            }
            multiply *= nums[i];
        }
        if(count > 1){
            return arr;
        }
        else if(count == 1){
            arr[index] = multiply;
        }
        else{
            for(int i=0; i<nums.size(); i++){
                arr[i] = multiply/nums[i];
            }
        }
        return arr;
    }
};
