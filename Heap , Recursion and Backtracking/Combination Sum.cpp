class Solution {
public:
    set<vector<int>> s;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        MultipleCombinations(candidates, target, 0, ans, combi);
        return ans;
    }
    void MultipleCombinations(vector<int>& candidates, int target, int i, vector<vector<int>> &ans, vector<int> &combi){
        if(i == candidates.size() || target < 0) return;
        if(target == 0){ 
            if(s.find(combi) == s.end())
                ans.push_back(combi); 
                s.insert(combi);
                return;
        }

        combi.push_back(candidates[i]);
        MultipleCombinations(candidates, target - candidates[i], i + 1, ans, combi);
        MultipleCombinations(candidates, target - candidates[i], i, ans, combi);
        combi.pop_back();
        MultipleCombinations(candidates, target, i + 1, ans, combi);
    }
};