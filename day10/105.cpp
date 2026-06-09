#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
   int data;
    TreeNode *left;
   TreeNode* right;

   TreeNode(int val){
    data = val;
    left = nullptr;
    right = nullptr;
   }
};

TreeNode* binaryTree(vector<int> preorder, vector<int> inorder){
    int preorderIdx=0;
    return construct(preorder, inorder, 0, inorder.size()-1, preorderIdx);
} 
TreeNode* construct(vector<int>& preorder, vector<int>& inorder, int left, int right, int preorderIdx){
    if(left>right) return nullptr;

    int mid=left;
    TreeNode* root=new TreeNode(preorder[preorderIdx]);

    while(inorder[mid] != preorder[preorderIdx]) 
        mid++;
    preorderIdx++;
    root->left=construct(preorder, inorder, left, mid-1, preorderIdx );
    root->right=construct(preorder, inorder, mid+1, right,  preorderIdx);
    return root;
}


int main(){
    vector<int> p={3, 9, }
}