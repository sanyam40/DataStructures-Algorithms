#include <iostream>
using namespace std;

// void fun(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         int occ = 0;
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 occ++;
//             }
//         }
//         if (occ == 0) {
//             cout << "UNIQUE ELEMENT IS: " << arr[i] << endl;
//         }
//     }
// }

void unique(int arr[],int size){
    int ans=0;

    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}

int main() {
    int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int size = 9;
    // fun(arr, size);
    unique(arr,size);
    return 0;
}
