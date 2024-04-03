void printBottomView(Node* root,int hd){
    map<int,int> hdToNodeMap;
    queue<pair<Node*,int>>q;

    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();

        Node* frontNode=temp.first;
        int hd=temp.second;

            hdToNodeMap[hd]=frontNode->data;

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
