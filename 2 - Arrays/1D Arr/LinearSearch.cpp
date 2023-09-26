#include <iostream>
using namespace std;

void linearSearch(int arr[],int size,int element){
    bool found=false;

    for(int i=0;i<size;i++){
        if(arr[i]==element){
            found=true;
            cout<< "Element Found At : "<<i;
        }
    }

    if(found==false){
        cout<< "Element not found !";
    }
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

    int element_toSearch;
    cout<<"Enter element to search : ";
    cin>> element_toSearch;

    linearSearch(arr,size,element_toSearch);
}