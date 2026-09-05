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
void in(TreeNode *root,vector<int>&respreorder){
  if(!root){
  return ;
  }
   respreorder.push_back(root->val);
  in(root->left,respreorder);
  in(root->right,respreorder);
}
    vector<int> preorderTraversal(TreeNode* root) {
  vector<int>respreorder;
  in(root,respreorder);
  return respreorder;
}
 };