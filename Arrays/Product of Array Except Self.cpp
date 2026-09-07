class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> right_fix;
        vector<int> final;
        long long pro=1;
        long long pr=1;
        int i;
        int j;
        int k;
        int l;
        for(i=1; i<nums.size()+1; i++){
            left.push_back(pro);
            pro *= nums[i-1];
        }
        for(j=nums.size()-2; j>=-1; j--){
            right.push_back(pr);
            pr *= nums[j+1];
        }
        for(k=right.size()-1; k>=0; k--){
            right_fix.push_back(right[k]);
        }
        for(l=0; l<nums.size(); l++){
            final.push_back(left[l]*right_fix[l]);
        }
        return final;
    }
};