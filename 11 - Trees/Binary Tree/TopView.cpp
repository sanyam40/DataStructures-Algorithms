#include <iostream>
#include <queue>
#include<map>
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

void printTopView(Node* root,int hd){
    map<int,int> hdToNodeMap;
    queue<pair<Node*,int>>q;

    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();

        Node* frontNode=temp.first;
        int hd=temp.second;

        // if entry is not found then create
        if(hdToNodeMap.find(hd)==hdToNodeMap.end()){
            hdToNodeMap[hd]=frontNode->data;
        }

        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }

        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:hdToNodeMap){
        cout<<i.second<<" ";
    }
}



// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1  -1
int main(){
    Node* root=createTree();
    printTopView(root,0);
}