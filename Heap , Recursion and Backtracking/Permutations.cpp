class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        permutate(nums, temp, result);
        return result;
    }
    void permutate(vector<int>& nums, vector<int>& temp, vector<vector<int>>& result){
        if(temp.size() == nums.size()){
            result.push_back(temp);
            return;
        }
        for(auto& i : nums){
            if(find(temp.begin(),temp.end(),i) != temp.end()){
                continue;
            }
            temp.push_back(i);
            permutate(nums, temp, result);
            temp.pop_back();

        }
    }
};