class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v1;
        vector<char> v2;
        for(int j = 0; j <= s.size()-1; j++){
            if(isalnum(s[j])){    
            v2.push_back(tolower(s[j]));}
        }
        v1 = v2;
        reverse(v1.begin(),v1.end());
        return v1 == v2;
    }
};