class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxiPathSum(root , maxi);
        return maxi;
        }
int maxiPathSum(TreeNode* node, int &maxi){
    if(node == NULL) return 0;
    int left = max(0, maxiPathSum(node->left, maxi));
    int right = max(0, maxiPathSum(node->right, maxi));
    maxi = max(maxi, node->val + left + right);
    return node->val + max(left,right);
}
};