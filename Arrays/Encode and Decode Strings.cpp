#include <string>
class Solution {
  public:
    string encode(vector<string>& arr) {
        string result = "";
        for(int i = 0; i < arr.size(); i++){
            string str = arr[i];
            result += to_string(str.size()) + "/:" + str;
        }
        return result;
    };

    vector<string> decode(string& s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j]  != '/' && s[j+1] != ':'){
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            string str = s.substr(j+2, length);
            result.push_back(str);
            i = j + 2 + length;
            }
            return result;
    };
};