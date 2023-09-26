#include <iostream>
using namespace std;

void sum(int arr[], int size){
    int sum = 0;

    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    cout << "Sum of the Array is : " << sum;
    cout << endl;
}

void max(int arr[],int size){
    int max=INT16_MIN;

    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<< "Max no in Array is : "<<max;  
    cout<< endl;  
}

void min(int arr[],int size){
    int min=INT16_MAX;

    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<< "Min no in Array is : "<<min;
    cout<< endl;
}

int main(){
    int size;

    cout << "Enter the Size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " Element : ";
        cin >> arr[i];
    }

    sum(arr, size);
    max(arr,size);
    min(arr,size);
}