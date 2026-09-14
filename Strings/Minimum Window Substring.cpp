class Solution {
public:
    string minWindow(string s, string t) {
        int hash[256] = {0};
        int r = 0;
        int l = 0;
        int min_len = INT_MAX;
        int s_index = -1;
        int count = 0;
        for(int i = 0; i < t.length(); i++){
            hash[t[i]]++;
        }
        while(r < s.length()){
            if(hash[s[r]] > 0) count++;
            hash[s[r]]--;
            while(count == t.size()){
                if((r - l + 1) < min_len){
                    min_len = r - l + 1;
                    s_index = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) count--;
                l++;
            }
            r++;

        }
        return s_index == -1 ? "" : s.substr(s_index, min_len);
    }
};