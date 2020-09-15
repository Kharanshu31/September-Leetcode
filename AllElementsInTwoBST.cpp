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
    
    vector<int>ans;
    void traverse(TreeNode* root)
    {
        if(!root)
            return;
        
        if(root->left)
        {
            ans.push_back(root->left->val);
            traverse(root->left);
        }
        
        if(root->right)
        {
            ans.push_back(root->right->val);
            traverse(root->right);   
        }
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        traverse(root1);
        traverse(root2);
        if(root1)
            ans.push_back(root1->val);
        if(root2)
            ans.push_back(root2->val);
        if(ans.size())
            sort(ans.begin(),ans.end());
        
        return ans;
    }
};
