/* Two Sum IV Input is a BST

Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.

 Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.

 Input: root = [5,3,6,2,4,null,7], k = 28
Output: false
Input: root = [5,3,6,2,4,null,7], k = 9
Output: true
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
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> set;
        return dfs(root,set,k);
        
    }
    bool dfs(TreeNode* root,unordered_set<int> &set,int k)
    {
        if(root==NULL)
            return false;
        if(set.count(k-root->val))
            return true;
        set.insert(root->val);
        return dfs(root->left,set,k) || dfs(root->right,set,k);
    }
};