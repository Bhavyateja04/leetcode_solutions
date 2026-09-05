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
void in(TreeNode *root,vector<int>&resinorder){
  if(!root){
  return ;
  }
  in(root->left,resinorder);
  resinorder.push_back(root->val);
  in(root->right,resinorder);
}
    vector<int> inorderTraversal(TreeNode* root) {
  vector<int>resinorder;
  in(root,resinorder);
  return resinorder;
}
 };