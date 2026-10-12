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
    void solve(TreeNode* root,vector<int> &temp,vector<vector<int>> &ans,int target){
        if(!root) return;
        target-=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right){
            if(target==0){
                ans.push_back(temp);
            }
            temp.pop_back();
            return;
        }
        solve(root->left,temp,ans,target);
        solve(root->right,temp,ans,target);
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return {};
        vector<vector<int>> ans;
        vector<int> temp;
        solve(root,temp,ans,targetSum);
        return ans;
    }
};