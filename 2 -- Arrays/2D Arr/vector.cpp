#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr; // 1-D Vector
    vector<vector<int> > array(5,vector<int>(5,-1)); // 2-D Vector

    for(int i=0;i<array.size();i++){
        for(int j=0;j<array[i].size();j++){
            cout << array[i][j]<<" ";
        }
        cout<<endl;
    }
}
