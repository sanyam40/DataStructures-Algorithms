#include <iostream>
#include <queue>
using namespace std;

// using max Heap TC : O(k)
int getkthSmallest(int arr[],int k,int size){
    priority_queue<int>pq;

    // process k element 
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<size;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}

int main(){
    int arr[]={3,5,4,6,9,8,7};
    int n=7;
    int k=4;
    cout<<getkthSmallest(arr,k,n);
}