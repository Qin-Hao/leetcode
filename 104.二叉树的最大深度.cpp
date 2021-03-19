/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
 */

// @lc code=start
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
class Solution 
{
public:
    int ans = 0;
    void DFS(TreeNode *root, int depth)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            if (depth > ans)
            {
                ans = depth;
            }
        }
        if (root->left != nullptr)
        {
            DFS(root->left, depth + 1);
        }
        if (root->right != nullptr)
        {
            DFS(root->right, depth + 1);
        }
    }

    int maxDepth(TreeNode* root) 
    {
        if (root == nullptr)
        {
            return 0;
        }
        DFS(root, 1);
        return ans;
    }
};
// @lc code=end

