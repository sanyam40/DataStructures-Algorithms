#include <iostream>
using namespace std;

bool find(int arr[3][3],int target){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                cout<<"Element Found At : "<<"["<<i<<","<<j<<"]";
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int target=9;
    find(arr,target);
}