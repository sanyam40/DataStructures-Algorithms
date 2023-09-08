#include <iostream>
using namespace std;

int main(){
    // For checking address
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

    for(int i=1;i<=5;i++){
        arr[i]=i;
    }

    for(int i=0;i<=5;i++){
        cout<< arr[i];
    }
    cout<<endl;

}