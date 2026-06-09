#include<bits/stdc++.h>
using namespace std;

int dfs(TreeNode* root,int cur){
    if(!root) return 0; 

    cur=cur*10+root->val;
    if(!root->left && !root->right) return cur;
    return dfs(root->left, cur)+dfs(root->right cur);
}
int sumNumbers(TreeNode* root){
    return dfs(root,0);
}

// int main()
// {
//     TreeNode* root=new TreeNode(1);
//     root->left=new TreeNode(2);
//     root->right=new TreeNode(3);

//     dfs(root,)
// }