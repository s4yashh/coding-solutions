// question link: https://leetcode.com/problems/unique-binary-search-trees-ii/

class Solution
{
public:
    vector<TreeNode *> build(int start, int end)
    {

        // Base case: empty tree
        if (start > end)
            return {nullptr};

        vector<TreeNode *> result;

        // Try every number as root
        for (int i = start; i <= end; i++)
        {

            // All possible left subtrees
            vector<TreeNode *> leftTrees = build(start, i - 1);

            // All possible right subtrees
            vector<TreeNode *> rightTrees = build(i + 1, end);

            // Combine left and right trees
            for (TreeNode *left : leftTrees)
            {
                for (TreeNode *right : rightTrees)
                {

                    TreeNode *root = new TreeNode(i);
                    root->left = left;
                    root->right = right;

                    result.push_back(root);
                }
            }
        }

        return result;
    }

    vector<TreeNode *> generateTrees(int n)
    {
        if (n == 0)
            return {};
        return build(1, n);
    }
};