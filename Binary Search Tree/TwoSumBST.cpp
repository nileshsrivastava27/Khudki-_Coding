#include<iostream>
#include<vector>
using namespace std;



class BinaryTreeNode 
    {
    public : 
        int data;
        BinaryTreeNode *left;
        BinaryTreeNode *right;

        BinaryTreeNode(int data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

void inorder(BinaryTreeNode* root, vector<int> &in){
    //base case
    if(root == NULL)
    {
        return;
    }
    
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}



bool twoSumInBST(BinaryTreeNode* root, int target) {
    vector<int> inorderVal;
    //store inorder sorted value
    inorder(root, inorderVal);
    
    int i=0;
    int j= inorderVal.size()-1;
    
    //use 2 pointer to check if the pairs exists
    while(i<j){
        int sum = inorderVal[i] + inorderVal[j];
        
        if(sum==target){
            return true;
        }
        
        else if(sum>target){
            j--;
        }
        
        else{
            i++;
        }
    }
    return false;
}

int main(){
    return 0;
}