/**
 *
 * Problem Length : https://leetcode.com/problems/diameter-of-binary-tree/
 *
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
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL)
            return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return max(leftHeight + rightHeight, max(diameterOfBinaryTree(root->left), 
        diameterOfBinaryTree(root->right)));
    }

    int height(TreeNode* root){

        if(root == NULL)
            return 0;

        if(root->left == NULL && root->right == NULL)
            return 1;
        
        return max(height(root->left), height(root->right)) + 1;
    }
};
