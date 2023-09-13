#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Dynamic array size decided at run time
    // int n;
    // cin >> n;
    // int *arr=new int[n];

    // Vectors are the dynamic array such as ArrayList in java

    vector<int>v;

    v.push_back(1);
    v.push_back(3);

    int size=v.size();
    for(int i=0;i<size;i++){
        cout<< v[i] <<" ";
    }

    // delete ( pop )
    v.pop_back();

    // v.at(0);

    v.clear(); // remove all the element in the vector

}