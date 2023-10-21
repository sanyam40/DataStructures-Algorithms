#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mycomp(int &a,int &b){
    return a>b; // decreasing order
}

int main(){

    vector<int> v={30,60,10};
    sort(v.begin(),v.end(),mycomp);
    
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}