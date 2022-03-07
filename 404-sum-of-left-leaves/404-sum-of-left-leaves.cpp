/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int leftLeafSum(TreeNode* root, bool leftleaf){
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL && leftleaf){
            return root->val;
        }
        return leftLeafSum(root->left,true)+leftLeafSum(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return leftLeafSum(root,false);
    }
};