#include <iostream>
#include <climits>
using namespace std;

class info{
    public:
    int maxValue;
    bool isHeap;
};

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

info checkHeap(Node* root){
    // base case 1.NULL 2.leaf node
    if(root==NULL){
        info temp;
        temp.maxValue=INT_MIN;
        temp.isHeap=true;
    }
    if(root->left==NULL && root->right==NULL){
        info temp;
        temp.maxValue=root->data;
        temp.isHeap=true;
        return temp;
    }

    info leftAns=checkHeap(root->left);
    info rightAns=checkHeap(root->right);

    if(root->data > leftAns.maxValue && root->data > rightAns.maxValue && leftAns.isHeap && rightAns.isHeap){
        info ans;
        ans.maxValue=root->data;
        ans.isHeap=true;
        return ans;
    }
    else{
        info ans;
        ans.maxValue=max(root->data,max(leftAns.maxValue,rightAns.maxValue));
        ans.isHeap=false;
        return ans;
    }
} 

int main(){

}