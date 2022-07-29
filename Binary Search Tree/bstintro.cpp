#include<iostream>
#include<queue>
using namespace std;
                            //TIME COMPLEXITY = O(LOGN)
class Node {

    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data= d;
            this->right=NULL;
            this->left=NULL;
        }
};


Node* insertIntoBST(Node* &root, int data){

    if(root == NULL){
        root = new Node(data);
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

void takeInput(Node* &root){

    int data;
    cin>>data;

    while(data !=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

Node* minVal(Node* root){

    Node* temp = root;

    while(temp->left != NULL){
        temp= temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;

    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}




void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
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


void inorder(Node* root){     //ORDER TO FOLLOW IS: LNR
    //base case 
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);            //L
    cout<<root->data<<" ";          //N
    inorder(root->right);           //R
}


void preorder(Node* root){      // ORDER TO FOLLOW IS: NLR
    //base case 
    if(root == NULL)
        return;

    cout<<root->data<<" ";          //N
    inorder(root->left);            //L
    inorder(root->right);           //R

    
}

void postorder(Node* root){     //ORDER TO FOLLOW IS: LRN

    //base case
    if(root == NULL){
        return;
    }

    postorder(root->left);          //L
    postorder(root->right);         //R
    cout<<root->data<<" ";          //N
}

Node* findSuccessor(Node* root, Node* p)
{
    Node* successor = NULL;

    while(root!=NULL){
        if(p->data>=root->data){
            root=root->right;
        }
        else{
            successor= root;
            root=root->left;
        }
    }

    return successor;
    
}

Node* findPredecessor(Node* root, Node* p){

    Node* predecessor = NULL;

    while(root!=NULL){
        if(root->data>=p->data){
            root=root->left;
        }

        else{
            predecessor=root;
            root=root->right;

        }
    }

    return predecessor;


}


Node* deleteFromBST(Node* root, int val){

    //base case

    if(root==NULL){
        return root;
    }

    if(root->data == val){
        //0 child case
        if(root->left ==NULL && root->right== NULL){
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left !=NULL &&root->right==NULL){
            Node* temp =root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left ==NULL &&root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }


        //2 child

        if(root->left != NULL && root-> right!= NULL){
            int mini = minVal(root->right)-> data;
            root-> data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }





    }


    else if(root->data>val){
        //left part mein aajao

        root->left = deleteFromBST(root->left, val);
        return root; 
    }

    else{
        //right part mein aajao

        root->right = deleteFromBST(root->right, val);
        return root;
        
    }




}

int main(){

    Node* root = NULL;

    cout<<"Enter the data to create BST"<<endl;
    takeInput(root);


    cout<<"Printing the BSt"<<endl;
    levelOrderTraversal(root);


    cout<<"Printing inorder"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Printing postorder"<<endl;
    postorder(root);
    cout<<endl;

    cout<<"Printing preorder"<<endl;
    preorder(root);
    cout<<endl;

    cout<<endl;
    cout<<"The minimum value in the BST is:"<<minVal(root)->data<<endl;
    
    cout<<endl;

    cout<<"The maximum value in the BST is:"<<maxVal(root)->data<<endl;
    cout<<endl;


    root = deleteFromBST(root,30);
    cout<<"Printing the BST after the deletion of the node:"<<endl;
    levelOrderTraversal(root);

//50 20 70 10 30 90 110 -1  This is the value of BST to be input


    return 0;
}   