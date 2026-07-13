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
    int posi (vector<int >&inorder , int ele ) 
    {
        for(int i = 0 ; i < inorder.size() ; i++ ) 
        {
            if (inorder[i] == ele) return i; 
        }
        return -1; 
    }
    TreeNode * solve (vector<int >&preorder , vector<int >&inorder , int &preind , int st , int end , int n ) 
    {
        if (preorder.size() == 0 ) return nullptr;
        if (st > end  ) return nullptr ;
        if (preind >= n ) return nullptr ; 
        int ele = preorder[preind]  ;
        preind++;
        int pos = posi (inorder , ele ) ;
        TreeNode* root = new TreeNode(ele);
        root->left = solve (preorder, inorder , preind , st , pos -1 , n ) ;
        root->right = solve (preorder, inorder , preind , pos+1 , end  , n  ) ;
        return root ;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preind = 0 ; 
        int n = preorder.size() ;
       return  solve (preorder , inorder , preind , 0 , n - 1 , n ) ; 
    }
};