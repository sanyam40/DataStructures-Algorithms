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

Node* maxVal(Node* root){
    if(root==NULL) return 0;
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int target){
    if(root==NULL) return NULL;

    if(root->data==target){
        // 4 cases

        // 1 case -> leafe Node
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 2 case -> left non null nd right null
        if(root->left!=NULL && root->right==NULL){
            Node* childSubTree=root->left;
            delete root;
            return childSubTree;
        }
        // 3 case -> left me NULL nd right NON NULL
        if(root->left==NULL && root->right!=NULL){
            Node* childSubTree=root->right;
            delete root;
            return childSubTree;
        }
        // 4 case -> left nd right both non null
        else{
            // a -> left SubTree ki max value lao
            Node* maxi=maxVal(root->left);
            root->data=maxi->data;
            root->left=deleteFromBST(root->left,maxi->data);
            return root;
        }
    }
    else if(root->data>target){
        root->left= deleteFromBST(root->left,target);
    }
    else{
        root->right= deleteFromBST(root->right,target);
    }
    return root;
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

int main(){
    Node* root=NULL;
    createBST(root);

    cout<<"levelOrder"<<endl;
    levelOrder(root);

    deleteFromBST(root,5);
    cout<<"levelOrder After"<<endl;
    levelOrder(root);

}