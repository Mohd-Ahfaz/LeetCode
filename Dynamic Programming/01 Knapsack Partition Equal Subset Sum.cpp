class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 2 != 0) return false;
        int target = sum / 2;
        unordered_set<int> dp;
        dp.insert(0);
        for(int i = nums.size() - 1; i >= 0; i--){
            unordered_set<int> new_dp;
            for(auto &j : dp){
                if(j + nums[i] == target) return true;
                new_dp.insert(j + nums[i]);
                new_dp.insert(j);
            }
            dp = new_dp;
        }
        return dp.count(target);
    }
};