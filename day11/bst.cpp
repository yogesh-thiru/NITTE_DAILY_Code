#include<bits/stdc++.h>
using namespace std;
//template<typename T>
//Binary Search Tree implementation
class TreeNode{
    public:
  int data;
  TreeNode* left;
  TreeNode* right;

   TreeNode(int val){
    data = val;
    left= nullptr;
    right = nullptr;
   }
};
   TreeNode* insert(int val , TreeNode* root){
    if(root == nullptr) return new TreeNode(val);
    if(val<root->data){
        root->left = insert(val,root->left);
    }
    else if (val>root->data) {
        root->right = insert(val,root->right);
    }
    return root;
   }

   void inorder(TreeNode * root){
   if(root == nullptr)return;
   inorder(root->left);
   cout<<root->data<<"->";
   inorder(root->right);


   }

   void bfs(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){
        TreeNode* cur = q.front();
        q.pop();
        cout<<cur->data<<"->";
        if(cur->left)q.push(cur->left);
        if(cur->right)q.push(cur->right);
    }
    cout<<"nullptr";

   }


int main(){
TreeNode* root=NULL;

root = insert(1,root);
root = insert(2,root);
root = insert(3,root);
root = insert(4,root);
bfs(root);
//TreeNode* bst = new TreeNode();



//bst->bfs(bst);


}


    //      3
    // 1       5  
    //   2   4     