class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max_area;

        while(left<right){
            int area = min(height[left],height[right])*(right-left);
            max_area= max(max_area,area);
            if(height[right]<height[left]){
                right--;
            }
            else{
                left++;
            }
        } 
        return max_area;
    }
};