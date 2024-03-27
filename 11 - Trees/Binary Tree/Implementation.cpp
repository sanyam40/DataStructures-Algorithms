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

Node* createTree(){ // Return Root Node
     cout<<"Enter the value : "<<endl;
     int data;
     cin>>data;

     if(data==-1) return NULL;

     // Step 1 : create Node
     Node* newNode=new Node(data);

     // Step 2 : create left tree
     cout << "left Node of : "<<newNode->data<<endl;
     newNode->left=createTree();

     // Step 3 : create right tree
     cout << "right Node of : "<<newNode->data<<endl;
     newNode->right=createTree();

     return newNode;
}

//  PreOrder Traversal , InOrderTraversal,PostOrderTraversal -> TC : O(N), SC : O(N)
void preOrderTrversal(Node* root){
    if(root==NULL){
        return;
    }
    // N L R
    cout<<root->data<<" "<<endl;
    preOrderTrversal(root->left);
    preOrderTrversal(root->right);
}

void InOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    // LNR
    InOrderTraversal(root->left);
    cout<<root->data<<" "<<endl;
    InOrderTraversal(root->right);
}

void PostOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    // LRN
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" "<<endl;
}

// TC : O(N)
void levelOrderTraversal(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            
            if(front->left!=NULL){
                q.push(front->left);
            }
            
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}


int main(){

    Node* root=createTree();
    cout<<root->data;

    preOrderTrversal(root);
    InOrderTraversal(root);
    PostOrderTraversal(root);
    levelOrderTraversal(root);

}