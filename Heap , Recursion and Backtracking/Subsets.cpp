class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        recurse(nums, curr, 0);
        return res;
    }
    void recurse(vector<int> nums, vector<int> curr, int n){
        res.push_back(curr);
        for(int i = n; i < nums.size(); i++){
            curr.push_back(nums[i]);
            recurse(nums, curr, i+1);
            curr.pop_back();
        }
    }
};