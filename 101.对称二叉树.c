/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
 *
 * https://leetcode-cn.com/problems/symmetric-tree/description/
 *
 * algorithms
 * Easy (48.06%)
 * Likes:    433
 * Dislikes: 0
 * Total Accepted:    52.5K
 * Total Submissions: 108.6K
 * Testcase Example:  '[1,2,2,3,4,4,3]'
 *
 * 给定一个二叉树，检查它是否是镜像对称的。
 * 
 * 例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
 * 
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠/ \ / \
 * 3  4 4  3
 * 
 * 
 * 但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:
 * 
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠  \   \
 * ⁠  3    3
 * 
 * 
 * 说明:
 * 
 * 如果你可以运用递归和迭代两种方法解决这个问题，会很加分。
 * 
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSymetric(struct TreeNode* l_tree,struct TreeNode* r_tree)
{
    if(NULL == l_tree && NULL == r_tree)
        return true;
    else if (NULL != l_tree && NULL != r_tree)
        return l_tree->val == r_tree->val && isSymetric(l_tree->left, r_tree->right) && isSymetric(l_tree->right, r_tree->left);
    else
        return false;
}

bool isSymmetric(struct TreeNode* root){
    if(NULL == root)
        return true;
    return isSymetric(root->left, root->right);
}


