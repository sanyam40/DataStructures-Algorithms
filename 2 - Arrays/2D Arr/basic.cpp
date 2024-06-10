#include <iostream>
using namespace std;

const int rows = 3;
const int col = 5;

void printArray(int arr[][col]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void colprintArray(int arr[][col]) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < rows; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    
    // formula : c*i+j ( storing data )

    int arr[rows][col]={ // col size has to be given. every time 2d arr is declared or passed to a function
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
        };  

    // Taking input from the user
    int array[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the Value for - ["<<i<<","<<j<<"] : ";
            cin>>arr[i][j];
        }
    }    

    printArray(arr);
    colprintArray(arr);
}