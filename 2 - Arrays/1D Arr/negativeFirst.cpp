#include <iostream>
using namespace std;

void solve(int arr[],int size){

    int j=0;
    // j -> memory block jaha pr negative no store honge
    for(int i=0;i<size;i++){
        if(arr[i]<0){
        // swap 
        // int temp=arr[j];
        // arr[j]=arr[i];
        // arr[i]=temp;
        swap(arr[i],arr[j]);
        j++;
        }
    }
}

int main(){

    int arr[]={23,-7,12,-10,-11,40,60};
    solve(arr,7);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}