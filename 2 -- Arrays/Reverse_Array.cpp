#include <iostream>
using namespace std;

int main(){

    int arr[]={2,4,6,8};
    int size=4;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<size;i++){
        for(int j=size-1;i<=j;j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}