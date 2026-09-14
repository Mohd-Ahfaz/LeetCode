#include <string>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string,vector<string>> mpp;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mpp[strs[i]].push_back(temp);
        }
        for(auto it : mpp){
            vec.push_back(it.second);
        }
        return vec;
    }
};