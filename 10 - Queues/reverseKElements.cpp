#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// TC -> O(n)

void reverse(queue<int> &q,int k){
    stack<int> s;
    int i=1;
    int j=1;

    if(k>q.size() || k==0){
        return;
    }
    
    while(i<=k){
        int frontElement=q.front();
        q.pop();
        s.push(frontElement);
        i++;
    }

    while(j<=k){
        int element=s.top();
        s.pop();
        q.push(element);
        j++;
    }

    for(int i=0;i<(q.size()-k);i++){
        int temp=q.front();
        q.pop();
        q.push(temp);
    }
}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k=3;

    reverse(q,k);

    while(!q.empty()){
        int element=q.front();
        q.pop();
        cout<<element<<" ";
    }
}