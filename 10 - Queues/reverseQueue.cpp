#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int frontElement=q.front();
        q.pop();
        s.push(frontElement);
    }

    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }
}

void recursion(queue<int> &q){
    if(q.empty()){
        return ;
    }

    int element=q.front();
    q.pop();

    recursion(q);

    q.push(element);
}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // reverse(q);
    recursion(q);

    while(!q.empty()){
        int element=q.front();
        q.pop();
        cout<<element<<" ";
    }
}