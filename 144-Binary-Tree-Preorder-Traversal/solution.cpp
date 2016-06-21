/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==nullptr){
            return result;
        }
        
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* p=s.top();
            s.pop();
            result.push_back(p->val);
            
            if(p->right!=nullptr){
                s.push(p->right);
            }
            
            if(p->left!=nullptr){
                s.push(p->left);
            }
            
        }
        return result;
    }
};