#include<iostream>
using namespace std;

// this is the code for checking whether the it is a binary tree or not 

//                                      TIME COMPLEXITY = O(n)   SPACE = O(h) height of the tree
    class Node 
    {
    public : 
        int data;
        Node* left;
        Node* right;

        Node(int d) {
            this -> data = d;
            this->left = NULL;
            this->right = NULL;
        }
    };


bool isBST(Node *root, int min, int max){
    //base case
    if(root==NULL){
       return true;
    }
    
    if(root->data >= min && root->data <= max){
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);
        return left && right;
    }
    else
        return false;
    
    
}

bool validateBST(Node *root) {
    return isBST(root,INT_MIN,INT_MAX);
}