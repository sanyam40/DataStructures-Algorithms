#include <iostream>
using namespace std;

void count(int arr[],int size){

    int zero=0;
    int one=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }

    cout<< "No of 0's is : "<<zero<<endl;
    cout<< "No of 1's is : "<<one<<endl;
}

int main(){

    int arr[]={0,0,0,1,0,1,0,0,1,1};
    int size=10;

    count(arr,size);
}