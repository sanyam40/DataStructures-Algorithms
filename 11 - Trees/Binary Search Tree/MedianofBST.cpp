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



int main(){
    int inOrder[]={
        1,2,3,4,5,6,7,8,9,10
    };
    int size=10;
    int s=0;
    int e=size-1;
    Node* x=new Node(5);
    Node* root=BSTFromInOrder(inOrder,s,e);
    
}