class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_map<char, int> m;
        int max_len = 0;
        while(right < s.size()){
            if(m.find(s[right]) != m.end()){
                if(m[s[right]] >= left){
                    left = m[s[right]] + 1;
                }
            }
            int len = right - left + 1;
            max_len = max(max_len, len);
            m[s[right]] = right;
            right++;
        }
        return max_len;
    }
};