class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = nums[0];
        long long max = nums[0];
        int i;
        for(i=1; i<nums.size(); i++){
            
            if(sum<0){
                sum = 0;
            }
            sum += nums[i];
            if(sum>max){
                max = sum;
            }
            
        }
        return max;
    }
};