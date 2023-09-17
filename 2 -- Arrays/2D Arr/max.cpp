#include <iostream>
using namespace std;

void max(int arr[][3]){

    int max=INT16_MIN;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"Max no is : "<<max;
}

int main(){

    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,10}
    };

    max(arr);
}