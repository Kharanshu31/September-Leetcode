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
    
    int binary_to_decimal(string &s)
    {
    
        int n=s.length();
    
        int mul=1;
    
        int smlans=0;
    
        for(int i=n-1;i>=0;i--)
        {
        
            smlans+=(s[i]-'0')*mul;
            mul=mul*2;
        }
        return smlans; 
    
    }
    
    //string s="";
    vector<string>ans;
    void traverse(TreeNode* root,string s)
    {
        if(!root)
        {
            return;   
        }
        
        s+=to_string(root->val);
        
        //cout<<" s : "<<s<<" at the val :  "<<root->val<<"\n";
        
        if (!root->left && !root->right)
        {
            ans.push_back(s);
            return;
        }
        
        traverse(root->left,s);
        traverse(root->right,s);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        traverse(root,"");
        
        int r=0;
        for(int i=0;i<ans.size();i++)
        {
            r+=binary_to_decimal(ans[i]);
        }
        
        return r;
        
    }
};
