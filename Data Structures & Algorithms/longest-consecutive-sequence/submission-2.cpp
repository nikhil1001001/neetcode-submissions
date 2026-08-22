class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set a(nums.begin(), nums.end());
        vector<int> arr;
        for(int i: a){
            arr.push_back(i);
        }
        int count=0, max = 0;
        for(int i=0; i< a.size()-1; i++){
            if(arr[i]==arr[i+1]-1){
                count++;
            }
            else{
                count = 0;
            }
            if(count>max){
                max = count;
            }
        }
        // if(count == a.size()-1) return count+1;
        return max+1;
    }
};
