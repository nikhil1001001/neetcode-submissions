class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        while(n>0){
            if(n%2 == 1){
                sum +=1;
            }
            n = n/2;
        }
        return sum;
    }
};
