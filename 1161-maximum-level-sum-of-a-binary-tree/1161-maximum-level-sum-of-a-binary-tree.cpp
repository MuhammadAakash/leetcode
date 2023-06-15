class Solution {
    int store[40] = {}, maxLevel;
    void dfs(TreeNode *root, int level = 0) {
        store[level] += root->val;
        maxLevel = max(level, maxLevel);
        if (root->left) dfs(root->left, level + 1);
        if (root->right) dfs(root->right, level + 1);
    }
public:
    int maxLevelSum(TreeNode *root) {
        int maxV = INT_MIN, res;
        dfs(root);
        for (int i = 0; i <= maxLevel; i++) {
            if (store[i] > maxV) {
                maxV = store[i];
                res = i;
            }
        }
        return res + 1;
    }
};