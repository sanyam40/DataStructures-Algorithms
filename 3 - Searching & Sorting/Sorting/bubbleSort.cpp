#include <iostream>
using namespace std;

/* Bubble sort
--> It works by repeately swapping the adjacent elements
--> In every round the largest value takes their correct place

T.C : O(n^2)
S.C : O(1)
*/

int sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){ // for sort in decreasing order arr[j]<arr[j+1]
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[]={7,5,8,3,4,2};
    int n=6;

    sort(arr,n);
}