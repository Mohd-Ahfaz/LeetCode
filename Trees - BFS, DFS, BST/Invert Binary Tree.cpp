class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;
        invertTree(root->left);
        invertTree(root->right);

        TreeNode* Temp = root->left;
        root->left = root->right;
        root->right = Temp;

    return root;
    }
};