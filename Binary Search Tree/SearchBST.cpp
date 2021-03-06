#include<iostream>
using namespace std;

    class BinaryTreeNode {
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


bool searchInBST(BinaryTreeNode *root, int x) {
//     //base case
    if(root == NULL)
        return false;
    
    if(root->data == x)
        return true;
    
    
    if(root->data > x){
        return searchInBST(root->left,x);
    }
    
    else{
        return searchInBST(root->right,x);
    }
    
    return root;


    // OR

    
    BinaryTreeNode *temp = root;
    
    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }
        
        if(temp->data > x){
            temp=temp->left;
        }
        
        else{
            temp= temp->right;
        }
        
        
    }
    return false;
}


int main(){
    return 0;
}