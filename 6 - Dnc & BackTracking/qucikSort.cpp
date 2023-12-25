#include <iostream>
using namespace std;

void quickSort(int arr[],int size,int start,int end){

    if(start>=end) return;

    int i=start-1;
    int j=start;
    int pivot=end;

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    quickSort(arr,5,start,i-1);
    quickSort(arr,5,i+1,end);
}

int main(){

    int arr[]={1,27,5,3,9};
    int size=5;
    quickSort(arr,size,0,size-1);

    for(int i=0;i<size;i++){
        cout<< arr[i] << ' ';
    }
    cout<<endl;
}