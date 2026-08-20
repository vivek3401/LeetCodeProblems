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
    int maxDiff(TreeNode* root,int mini,int maxi){
        if(root==NULL) return abs(mini-maxi);
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        int left=maxDiff(root->left,mini,maxi);
        int right=maxDiff(root->right,mini,maxi);
        return max(left,right);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mini=1e9,maxi=-1e9;
        return maxDiff(root,mini,maxi);
    }
};