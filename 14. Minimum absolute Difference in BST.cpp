/* Minimum absolute Difference in bst

Given a binary search tree with non-negative values, find the minimum absolute difference between values of any two nodes.
Input:

   1
    \
     3
    /
   2

Output:
1

Explanation:
The minimum absolute difference is 1, which is the difference between 2 and 1 (or between 2 and 3).

*/

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
    int min_dif = INT_MAX;
    int val = -1;
public:
    int getMinimumDifference(TreeNode* root) {
        if(root->left != NULL)
            getMinimumDifference(root->left);
        if(val>=0)
            min_dif = min(min_dif , root->val - val);
        val = root->val;
        if(root->right!=NULL)
            getMinimumDifference(root->right);
        return min_dif;
        
    }
};