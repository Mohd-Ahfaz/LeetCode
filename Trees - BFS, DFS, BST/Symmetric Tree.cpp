class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSym(root->left,root->right);
        
    }
    bool isSym(TreeNode* left, TreeNode* right){
        if(left == NULL || right == NULL) return left == right;
        if(left->val != right->val) return false;

        return isSym(left->left, right->right) && isSym(left->right,right->left);
    }
};