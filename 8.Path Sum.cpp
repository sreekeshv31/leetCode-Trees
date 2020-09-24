/* Path Sum

Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Note: A leaf is a node with no children.

Example:

Given the below binary tree and sum = 22,


      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7    2      1

*/

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        //int sum = 0;
        if(root==NULL)
            return false;
        sum = sum - root->val;
        if(root->val==sum && root->left==NULL && root->right == NULL)
            return true;
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);
        
    }
};