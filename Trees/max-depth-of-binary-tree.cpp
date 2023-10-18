/**
 * Problem link - https://leetcode.com/problems/maximum-depth-of-binary-tree/
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

    int maxDepth(TreeNode* root) {

        int leftCount = 0;
        int rightCount = 0;
        int count = 0;

        if(root == nullptr)
            return count;

        if(root->left == NULL && root->right == NULL){
            count++;
            return count;
        }
        else{
            leftCount = maxDepth(root->left);
            rightCount = maxDepth(root->right);
            count = 1 + max(leftCount, rightCount);
        }
        
        return count;
    }
};
