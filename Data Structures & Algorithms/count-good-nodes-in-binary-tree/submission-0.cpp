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
private:
    int countgoodnodes=0;
    void dfs(TreeNode*root,int maxsofar){
        if(!root) return;
        if(root->val>=maxsofar){
            countgoodnodes++;
            maxsofar=root->val;
        }
        //traverse the children
        dfs(root->left, maxsofar);
        dfs(root->right, maxsofar);
    }
public:
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        dfs(root, root->val);
        return countgoodnodes;
    }
};
