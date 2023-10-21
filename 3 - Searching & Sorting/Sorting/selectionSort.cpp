#include <iostream>
using namespace std;

/* Selection Sort

--> It is an algo which sorts an arr by repeatedly find the min element
--> Smaller elemenet ko lakr correct position pr rakhna h 

T.C : O(n^2)
S.C : O(1)

*/

void sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int minIndex=i;  // i element is the smallest hai
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[]={44,333,55,11};
    int n=4;

    sort(arr,n);
}