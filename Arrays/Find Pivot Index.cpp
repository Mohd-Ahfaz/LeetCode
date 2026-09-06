class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0;
        int j=0;
        int index;
        int right_sum=0;
        int left_sum=0;
        for(i=0; i<nums.size(); i++){
            right_sum += nums[i];
        }
        while(j<nums.size()){
            right_sum -= nums[j];
            if(left_sum == right_sum) return j;
            else{
            left_sum += nums[j];
            j++;
            }
        }
        return -1;
    }
};