#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node (int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};


node* buildTree(node* root) {

    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in the left of "<<data<<endl;
    root-> left = buildTree(root->left);
    cout<<"Enter the data of inserting in the right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(node* root){     //ORDER TO FOLLOW IS: LNR
    //base case 
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);            //L
    cout<<root->data<<" ";          //N
    inorder(root->right);           //R
}


void preorder(node* root){      // ORDER TO FOLLOW IS: NLR
    //base case 
    if(root == NULL)
        return;

    cout<<root->data<<" ";          //N
    inorder(root->left);            //L
    inorder(root->right);           //R

    
}

void postorder(node* root){     //ORDER TO FOLLOW IS: LRN

    //base case
    if(root == NULL){
        return;
    }

    postorder(root->left);          //L
    postorder(root->right);         //R
    cout<<root->data<<" ";          //N
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter the data for the root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }


        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}






int main () {
    node* root = NULL;

    //creating tree
    // root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order 
    /*
    cout<<"Printing the level order of traversal input "<<endl;
    levelOrderTraversal(root); 

    cout<<"Printing the level inorder traversal output"<<endl;
    inorder(root);

    cout<<endl;
    cout<<"Printing the level preorder traversal output"<<endl;
    preorder(root);

    cout<<endl;
    cout<<"Printing the level preorder traversal output"<<endl;
    postorder(root);
*/

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

}