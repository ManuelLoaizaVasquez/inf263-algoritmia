// https://leetcode.com/problems/binary-tree-postorder-traversal/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> traversal;
        DFS(root, traversal);
        return traversal;
    }
private:
    void DFS(TreeNode* root, vector<int>& traversal) {
        if (root == nullptr) return;
        DFS(root->left, traversal);
        DFS(root->right, traversal);
        traversal.push_back(root->val);
    }
};