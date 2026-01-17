// question link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// approach: first check if the root is null, if yes return 0. else recursively call the function for left and right subtree and return 1 + max of left and right subtree depth.
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return 1 + max(leftDepth, rightDepth);
    }
};