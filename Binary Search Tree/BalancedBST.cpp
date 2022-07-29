#include<iostream>
#include<vector>
using namespace std;

//NORMAL BST TO BALANCED BST

class TreeNode{
    public:

        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int d){
            this->data= d;
            this->right= NULL;
            this->left= NULL;
        }
};


TreeNode* inorderToBST(int s, int e, vector<int> &in){

    //base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;

    TreeNode* root = new TreeNode(in[mid]);
    root->left= inorderToBST(s, mid-1,in);
    root->right= inorderToBST(mid+1, e, in);

    return root;
}


TreeNode* inorder(TreeNode* root, vector<int> &in){

    if(root==NULL){
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}



TreeNode* balancedBst(TreeNode* root) {
        
    vector<int> inorderVal;
    
    inorder(root, inorderVal);
    
    int n = inorderVal.size();
    
    return inorderToBST(0, n-1, inorderVal);
}


int main(){
    return 0;
}