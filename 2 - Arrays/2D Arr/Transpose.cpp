#include <iostream>
using namespace std;

void transpose(int arr[][3]){

    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){ // only half array will swap
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< arr[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    transpose(arr);
}