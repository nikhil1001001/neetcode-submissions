class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }













        // for(int i = m-1; i>=0; i--){
        //     nums1[i+n] = nums1[i];
        // }
        // int j=0;
        // int k=n;
        // for(int i=0; i<m+n;i++){
        //     if(j>n-1 || k>m+n-1){
        //         break;
        //     }
        //     if(nums1[k]>nums2[j]){
        //         nums1[i]=nums2[j];
        //         j++;
        //     }
        //     else if(nums1[k]<nums2[j]){
        //         nums1[i]=nums1[k];
        //         k++;
        //     }
        //     else if(nums1[k]==nums2[j]){
        //         nums1[i] = nums1[k];
        //         j++;
        //         k++;
        //     }
        // }
        
    }
};