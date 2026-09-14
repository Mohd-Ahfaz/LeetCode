class Solution {
public:
    string longestPalindrome(string s) {
        string str = "";
        if(s.length() == 1) return s;
        for(int i = 1; i < s.length(); i++){
            int high = i;
            int low = i;
            while(s[low] == s[high]){
                low--;
                high++;
                if(low == -1 || high == s.length()) break;
            }
                string str1 = s.substr(low + 1, high - low - 1);
                if(str1.length() > str.length()) str = str1;

            int h = i;
            int l = i - 1;
            while(s[l] == s[h]){
                l--;
                h++;
                if(l == -1 || h == s.length()) break;
            }
                string str2 = s.substr(l + 1, h - l - 1);
                if(str2.length() > str.length()) str = str2;
                
            }
            return str;
        }
};