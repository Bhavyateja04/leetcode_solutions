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
 void Post(TreeNode* root,vector<int>&resPostOrder)
{
  if(!root){
      return ;
  }
  Post(root->left,resPostOrder);
  Post(root->right,resPostOrder);
  resPostOrder.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int>resPostOrder;
    Post(root,resPostOrder);
    return resPostOrder;
}
};