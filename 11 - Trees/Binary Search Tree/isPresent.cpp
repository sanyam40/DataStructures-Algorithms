#include <iostream>
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

bool isPresent(Node* root,int data){
    if(root==NULL) return false;

    if(root->data==data) return true;
    if(data>root->data){
        return isPresent(root->right,data);
    }
    else{
        return isPresent(root->left,data);
    }
}

int main(){
    Node* root=NULL;
    createBST(root);
    cout<<isPresent(root,25);
}