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
    int count = 0;
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return cnt(root);
        // int left = maxDepth(node->left);
        // int right = maxDepth(node->right);
        // max(left, right);
        
    }
private:
    int cnt(TreeNode* node){
        if(!node) return 0;
        int left = cnt(node->left);
        int right = cnt(node->right);
        count = max(left, right);
        return count+ 1;
    }
};
