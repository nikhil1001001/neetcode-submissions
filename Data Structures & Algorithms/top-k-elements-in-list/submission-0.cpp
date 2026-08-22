class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> temp;
        for(auto ch: mp){
            temp.push_back({ch.second,ch.first});
        }
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());

        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
