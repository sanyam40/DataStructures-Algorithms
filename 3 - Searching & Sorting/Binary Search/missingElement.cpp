#include <iostream>
using namespace std;

// T.C : O(logn)
int find(int arr[],int n){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        int diff=arr[mid]-mid;

        if(diff==1){
            // right me jaao
            s=mid+1;
        }
        else{
            // ans store
            ans=mid;
            // left me jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

    if(ans+1==0){
        return n+1;
    }
    
    return ans+1;
}

int main(){

    int arr[]={1,2,3,5,6,7,8};

    cout << find(arr,7);

}