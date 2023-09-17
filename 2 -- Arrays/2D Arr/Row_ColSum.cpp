#include <iostream>
using namespace std;

void Rowsum(int arr[][3]){

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
         cout<<"Sum for row - "<<i<<" : "<<sum<<endl;
    }
}

void Colsum(int arr[][3]){

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
         cout<<"Sum for col - "<<i<<" : "<<sum<<endl;
    }
}

void Diagnolsum(int arr[][3]){

    int sum=0;
    for(int i=0;i<3;i++){
        sum+=arr[i][i];
    }
    cout<<sum<<endl;
}

int main(){
     int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,10}
    };
    Rowsum(arr);
    Colsum(arr);
    Diagnolsum(arr);
}