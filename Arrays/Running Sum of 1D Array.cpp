class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans=0;
        int l=0;
        vector<int> v;
        while(l<nums.size()){
            ans += nums[l];
            v.push_back(ans);
            l++;
        }
        return v;
    }
};