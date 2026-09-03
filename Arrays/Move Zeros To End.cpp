class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nzero;
        vector<int> zero;
        for(int i : nums){
            if(i!=0){
                nzero.push_back(i);
            }
            else{
                zero.push_back(i);
            }
        }
        for(int j : zero){
            nzero.emplace_back(j);
        }
        nums=nzero;
    }
};