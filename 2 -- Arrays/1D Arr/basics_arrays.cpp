#include <iostream>
using namespace std;

int main(){
    // For checking address ( & )
    int a;
    cout<<&a<<endl;

    int array[3];
    for(int i=0;i<=sizeof(array);i++){
        cout << &array[i]<<endl;
    }

    // Both will print the same value ( address )
    cout<<array<<endl;
    cout<<&array<<endl;

    // Declaring Arrays with different methods
    int arr[5];
    int arrr[]={1,2,3,4,5};
    int arrrr[5]={1,2,3,4,5};

    // Taking input from the user and storing in array
    for(int i=0;i<5;i++){
        cout<< "Enter the "<< i << " element : " ;
        cin>> arr[i];
    }

    // Printing the array through iteration 
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    // Formula for arr[i]=Value At(Base address + (Data type size * index))

}