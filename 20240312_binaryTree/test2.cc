#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//思路：用队列来做，分层进入队列，上一层出队列的时候把自己的左右子树带入队列。
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        vector<int> ret;
        queue<TreeNode*> q;
        if(root == nullptr) return ret;
        
        q.push(root);
        while(!q.empty()) {
            TreeNode* tmp = q.front();
            q.pop();
            ret.push_back(tmp->val);
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
        return ret;
    }
};

