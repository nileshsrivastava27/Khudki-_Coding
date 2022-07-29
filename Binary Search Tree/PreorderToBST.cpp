#include<iostream>
#include<vector>
using namespace std;


class BinaryTreeNode{
    public:

        int data;
        BinaryTreeNode* left;
        BinaryTreeNode* right;


        BinaryTreeNode(int d){
            this->data= d;
            this->right= NULL;
            this->left=NULL;
        }
        
};

BinaryTreeNode* solve(vector<int> &preorder, int min, int max, int &i){

    if(i>preorder.size()){
        return NULL;
    }

    if(preorder[i]< min || preorder[i]> max){
        return NULL;
    }

    BinaryTreeNode* root = new BinaryTreeNode(preorder[i++]);
    root->left = solve(preorder, min, root->data, i);
    root->right = solve(preorder, root->data, max, i);

    return root; 
}




BinaryTreeNode* preorderToBST(vector<int> &preorder){
    
    int min = INT_MIN;
    int max = INT_MAX;
    int i = 0;


    return solve(preorder, min, max, i);

}

int main(){
    return 0;
}