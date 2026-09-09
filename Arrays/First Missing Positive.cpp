class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int num;
        int ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] <= 0 || nums[i] > nums.size()){
                nums[i] = nums.size() + 1;
            }
        }
        for(int j=0; j<nums.size(); j++){
            if(nums[j] < 0) num = (-nums[j]);
            else num = nums[j];
            if(num > nums.size()) continue;
            if(nums[num -1] > 0){
                nums[num - 1] = (-(nums[num - 1]));
            }
        }
        for(int k=0; k<nums.size(); k++){
            if(nums[k] > 0) return k + 1;
        }
            return nums.size()+1;
    }
};