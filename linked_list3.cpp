#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this-> data=data;
        this->next=NULL;
    }

    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
        cout<<"Memory is free by using a destructor"<<value<<endl;

    }
};

void InsertAtHead(Node* &head,int d)
{
    //new node create 
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}


void PrintNode(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertatTail(Node* tail ,int t){
    Node* temp = new Node(t);
    tail->next=temp;
    tail=temp;
}

void InsertAtPosition(Node* tail, Node* head, int position, int d){
    
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertatTail(tail,d);
        return;
    }

    //creating a node for d

    Node* nodeToInsert= new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}


void deleteNode(int position, Node* head){
    //deleting first or starting node
    if(position==1){
        Node* temp = head;
        head = head -> next;
        temp->next=NULL;
        //memory free start node
        delete temp;
    }
    else{
        //deleting any middle node or last node 

        Node* curr= head;
        Node* prev = NULL;

        int cnt=1;

        while(cnt<=position){
            prev=curr;
            curr = curr->next;
            curr->next=NULL;
            cnt++;
        } 

        prev -> next = curr -> next;
        delete curr;
    }
}



int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    //head pointed to node
    Node* head = node1;
    Node* tail=node1;
    PrintNode(head);

    insertatTail(tail,12);
    PrintNode(head);


    insertatTail(tail,15);
    PrintNode(head);
    
    InsertAtPosition(tail, head,1,22);
    PrintNode(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    
    deleteNode(1,head);
    PrintNode(head);


    }