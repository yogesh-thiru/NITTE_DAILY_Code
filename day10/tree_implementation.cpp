#include<bits/stdc++.h>
using namespace std;


//implement Node of a tree

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

void preorder(TreeNode* root){
    if(root == nullptr)return;
cout<<root->data<<endl;
preorder(root->left);
preorder(root->right);
}

void inorder(TreeNode* root){

    if(root == nullptr)return;
inorder(root->left);
cout<<root->data<<endl;
inorder(root->right);
}

void postorder(TreeNode* root){
    if(root == nullptr){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}

void bfs(TreeNode* root){
    if(root == nullptr) return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode* current_node = q.front();
        q.pop();
        cout<<current_node->data<<endl;
        if(current_node->left != nullptr)q.push(current_node->left);
        if(current_node->right != nullptr)q.push(current_node->right);
    }

}
int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right= new TreeNode(7);
    bfs(root);
    return 0;
}

           1 ->root
  
    2            3

4      5      6       7

q->
cur -> 7