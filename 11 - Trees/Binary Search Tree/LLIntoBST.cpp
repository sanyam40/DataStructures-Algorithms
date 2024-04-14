#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
             if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}

Node* BSTFromInOrder(int inOrder[],int s,int e){
    // base case
    if(s>e) return NULL;

    int mid=(s+e)/2;
    int element=inOrder[mid];

    Node* root=new Node(element);

    root->left=BSTFromInOrder(inOrder,s,mid-1);
    root->right=BSTFromInOrder(inOrder,mid+1,e);

    return root;
}

void convertIntoLL(Node* root,Node* &head){
    if(root==NULL) return ;

    // RNL
    convertIntoLL(root->right,head);

    // N
    root->right=head;
    if(head) head->left=root;
    head=root;

    // L
    convertIntoLL(root->left,head);
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->right;
    }
    cout<<"NULL"<<endl;
}

Node* convertIntoBST(Node* &head,int n ){
    if(head==NULL || n<=0) return NULL;

    // LNR

    Node* leftTree=convertIntoBST(head,n/2);

    Node* root=head;
    root->left=leftTree;
    head=head->right; // head update

    Node* rightTree=convertIntoBST(head,n-n/2-1);
    root->right=rightTree;
    return root;
}


int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
 
    first->right=second;
    second->left=first;
    second->right=third;
    third->left=second;

    Node* head=first;
    Node* root=convertIntoBST(head,3);
    levelOrder(root);

}