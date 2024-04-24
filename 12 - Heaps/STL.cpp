#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create max heap
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    cout<<pq.top()<<endl; // accessing the top element of heap ( max element )
    pq.pop();
    cout<<pq.top(); // accessing the top element of heap ( max element )
    cout << pq.size();

    // min heap creation
    priority_queue<int,vector<int>,greater<int>>pq2;
    pq2.push(10);
    pq2.push(20);
    pq2.push(30);
    pq2.push(40);
    pq2.push(50);

    cout<<pq2.top()<<endl; // accessing the top element of heap ( min element )



}