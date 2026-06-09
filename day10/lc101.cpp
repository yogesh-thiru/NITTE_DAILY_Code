#include <bits/stdc++.h>
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

bool isMirror(TreeNode* n1, TreeNode* n2) {
        if(n1 == nullptr && n2 == nullptr) {
        return true;}
    if(n1 == nullptr || n2 == nullptr) {
        return false;
    }

    
    return n1->data == n2->data && isMirror(n1->left, n2->right) && isMirror(n1->right, n2->left);
}

bool isSymmetric(TreeNode* root) {
    return isMirror(root->left, root->right);
}

int maxdepth(TreeNode* root){

if(root == nullptr)return 0;

int left  = maxdepth(root->left);
int right = maxdepth(root->right);

int res = 1+max(left,right);
return res;

}


int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right= new TreeNode(7);
  cout<<maxdepth(root);
    return 0;
}

inorder -> 4251637
preorder-> 1245367

   