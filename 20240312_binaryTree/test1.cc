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
 

//解法一 ：递归写法
class Solution1 {
public:
    void Traversal(vector<int> & v, TreeNode* root) {
        if(root == nullptr) return;
        v.push_back(root->val);
        Traversal(v, root->left);
        Traversal(v, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        Traversal(ret, root);
        return ret;
    }
};

//解法二： 非递归
//利用栈的特性：先root入栈，再right入栈，再left入栈，然后先弹出left
class Solution2 {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode *> st;
        vector<int> ret;
        if(root == nullptr) return ret;

        st.push(root);
        while(!st.empty()) {
            TreeNode* tmp = st.top();
            st.pop();
            ret.push_back(tmp->val);

            if(tmp->right) st.push(tmp->right);
            if(tmp->left) st.push(tmp->left);
        }
        return ret;
    }
};

