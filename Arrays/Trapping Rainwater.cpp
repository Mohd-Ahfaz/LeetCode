class Solution {
public:
    int trap(vector<int>& height) {
        int l_max=0;
        int r_max=0;
        int l=0;
        int r=height.size()-1;
        long long total=0;

        while(l<r){
            if(height[l]<=height[r]){
                if(l_max>height[l]){
                    total += l_max-height[l];
                    l++;
                }
                else{
                    l_max=height[l];
                    l++;
                }
            }
            else{
                if(height[r]<r_max){
                    total += r_max - height[r];
                    r--;
                }
                else{
                    r_max=height[r];
                    r--;
                }
            }
        }
        return total;
    }
};