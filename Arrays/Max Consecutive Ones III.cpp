class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        long long max_len=0;
        int len=0;
        int zeros=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zeros += 1;
                while(zeros>k){
                    if(nums[l]==0){
                        zeros -= 1;
                    }
                    l++;
                }
            }
        
                len = r - l + 1;
                if(max_len>len) max_len=max_len;
                else{
                    max_len=len;
                }
            r++;
        }
        return max_len;
    }
};