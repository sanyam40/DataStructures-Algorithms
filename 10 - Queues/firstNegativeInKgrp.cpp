#include <iostream>
#include <queue>
using namespace std;

// Important question

void firstNegative(int *arr,int n,int k){

    deque<int>q;

    // first Step -> process first k elements
    for(int i=0;i<k;i++){
        int element=arr[i];
        if(element<0){
            q.push_back(i);
        }
    }

    // process remaining windows
    // removal and addition
    for(int i=k;i<n;i++){
        // aage badhne se phle purani windows ka answer nikaldo
        if(q.empty()){
        cout << "0" << endl;
    }
    else{
        cout << arr[q.front()] << " ";
    }

        // removal - joh bhi index out of range h usko queue se remove kardo
        if(i-q.front()==k){
            q.pop_front();
        }

        // addition
        if(arr[i]<0){
            q.push_back(i);
        }
    }

    if(q.empty()){
        cout << "0" << endl;
    }
    else{
        cout << arr[q.front()] << " ";
    }
}

int main(){
    int arr[]={2,-5,4,-1,-2,0,5};
    firstNegative(arr,7,3);
}