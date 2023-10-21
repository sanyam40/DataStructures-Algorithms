#include <iostream>
using namespace std;

/* insertion Sort

--> It is a simple sorting algo that works similar to the way of sorting playing cards in hands
--> Values from unsorted part are picked and placed at correct position.

T.C : O(n^2)
S.C : O(1)

*/

int sort(int arr[],int n){

    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        } 
        arr[j+1]=key;
    }
}

int main(){

    int arr[]={6,8,3,2,9,70};
    int n=6;

    sort(arr,n);
}