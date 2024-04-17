#include <vector>
#include<iostream>
using namespace std;

vector<int> merge(Node *root1, Node *root2){
vector<int>ans; // store sorted elements
stack<Node*> sa,sb;

Node* a=root1,b*= root2;

while(a || b || !sa.empty() || !sb.empty()){
    while(a){
        sa.push(a);
        a=a->left;
    }
    while(b){
        sb.push(b);
        b=b->left;
    }

    if(sb.empty() || (!sa.empty() && sa.top()->data <=sb.top()->data)){
        auto atop=sa.top();
        ans.push_back(atop);
        atop.pop();
        a=atop->right;
    }
    else{
        auto btop=sb.top();
        sb.pop();
        ans.push_back(btop);
        b=btop->right;
    }
    return ans;
}
}