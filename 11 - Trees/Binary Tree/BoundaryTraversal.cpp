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

Node* createTree(){
    cout<<"Enter the value for Node (-1 for NULL): ";
    int value;
    cin >> value;
    if(value==-1){
        return NULL;
    }

    Node* root=new Node(value);
    cout << "Enter left child of " << value << ":\n";
    root->left=createTree();
    cout << "Enter right child of " << value << ":\n";
    root->right=createTree();
    return root;
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void InOrder(Node* root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(Node* root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
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

void printLeftBoundary(Node* root){
    if(root==NULL){
        return;
    }

    if(root->left==NULL && root->right==NULL){
        return;
    }

    cout<<root->data<<" ";
    // agar left mai node hogi toh left mai else right but sidha left mai nhi jaana
    if(root->left!=NULL){
        printLeftBoundary(root->left);
    }
    else{
        printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node* root){
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }

    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root){
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL){
        return;
    }

    if(root->right!=NULL){
        printLeftBoundary(root->right);
    }
    else{
        printLeftBoundary(root->left);
    }

    cout<<root->data<<" ";
}

void boundaryTraversal(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    printRightBoundary(root->right); 
}

// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1  -1
int main(){
    Node* root=createTree();
    boundaryTraversal(root);
}