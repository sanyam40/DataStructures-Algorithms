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

Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }

    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }
    else{
        root->left=insertIntoBST(root->left,data);
    }
}

void createBST(Node* &root){
    cout<<"Enter data : "<<endl;
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

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

void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// InOrder in BST will return Sorted Tree
void InOrder(Node* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

// TC in worst case will be O(N)/O(H)
int minVal(Node* root){
    if(root==NULL) return 0;
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int main(){
    Node* root=NULL;
    createBST(root);
    cout<<"Printing Level Order : "<<endl;
    levelOrder(root);
    cout<<"InOrder : "<<endl;
    InOrder(root);
    cout<<"Min val : "<<minVal(root)<<endl;
}