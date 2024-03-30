#include <iostream>
#include <queue>
#include <map>
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


// Important question 

int searchInOrder(int inorder[],int size,int target){
    for(int i=0;i<size;i++){
        if(inorder[i]==target) return i;
    }
}

void CreateMapping(int inOrder[],int size,map<int,int> &valueToIndexMap){

    for(int i=0;i<size;i++){
        int element=inOrder[i];
        int index=i;
        valueToIndexMap[element]=index;
    }

}

Node* constructTreeFromPreInOrder(map<int,int> &valueToIndexMap,int preOrder[],int inOrder[],int &preIndex,int inOrderStart,int inOrderEnd,int size){
    // base case
    if(preIndex>=size || inOrderStart>inOrderEnd){
            return NULL;
    }

    int element=preOrder[preIndex];
    preIndex++;
    Node* root=new Node(element);

    // int position=searchInOrder(inOrder,size,element);
    int position=valueToIndexMap[element]; // TC : O(1)

    root->left=constructTreeFromPreInOrder(valueToIndexMap,preOrder,inOrder,preIndex,inOrderStart,position-1,size);
    root->right=constructTreeFromPreInOrder(valueToIndexMap,preOrder,inOrder,preIndex,position+1,inOrderEnd,size);
    return root;
}

int main(){
    int inorder[]={10,8,6,2,4,12};
    int preOrder[]={2,8,10,6,4,12};
    int size=6;
    int preOrderIndex=0;
    int inOrderStart=0;
    int InOrderEnd=5;
    map<int,int>valueToIndexMap;
    CreateMapping(inorder,size,valueToIndexMap);

    Node* root=constructTreeFromPreInOrder(valueToIndexMap,preOrder,inorder,preOrderIndex,inOrderStart,InOrderEnd,size);
}