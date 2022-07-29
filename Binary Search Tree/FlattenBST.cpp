#include<iostream>
#include<vector>
using namespace std;


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


void inorder(TreeNode* root, vector<int> &in){

    if(root== NULL)
        return;

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);

}


TreeNode* flatten(TreeNode *root){
    vector<int> inorderVal;

    inorder(root, inorderVal);
    int n = inorderVal.size();

    TreeNode* newRoot = new TreeNode(inorderVal[0]);

    TreeNode* curr = newRoot;


    for(int i=1;i<n;i++){

       TreeNode* temp = new TreeNode(inorderVal[i]);

       curr->left= NULL;
       curr->right= temp;
       curr= temp;

    }

    curr->left=NULL;
    curr->right=NULL;

    return newRoot;

}

void takeInput(TreeNode* &root){

    int data;
    cin>>data;

    while(data !=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

TreeNode* insertIntoBST(TreeNode* &root, int data){

    if(root == NULL){
        root = new TreeNode(data);
        return root;

    }

    if(data > root ->data)
    {
        // right mein insert krna h root ke

        root->right = insertIntoBST(root->right, data);
    }

    else{
        root->left = insertIntoBST(root->left, data);
    }

    return root;

}

int main(){

    TreeNode* root = NULL;

    cout<<"Enter the value of BST:";
    takeInput(root);

    flatten(root);



}