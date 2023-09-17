#include <iostream>
using namespace std;

int main(){

    int arr[]={0,0,1,1,1,0,0,0,1};
    int n=9;

    int one_count=0;
    int zero_count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero_count++; }
        else{
            one_count++; }
    }

    int index=0;
    while(zero_count--){
        arr[index]=0;
        index++;
    }

    while(one_count--){
        arr[index]=1;
        index++;
    }

    for(int p=0;p<n;p++){
        cout<<arr[p]<<" ";
    }

}