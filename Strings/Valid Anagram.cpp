class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        if(s.size() != t.size()) return false;
        for(auto &it1 : s){
            m1[it1]++;
        }
        for(auto &it2 : t){
            m2[it2]++;
        }
        return m1==m2;
    }
};