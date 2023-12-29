#include <iostream>
#include <vector>
using namespace std;

// TC : O(n^2) , SC:O(n)
void solve(int arr[],int size,int j){
  
    if(j==size) {
      return;
    }
    vector<int> ans;

    for(int i=0;i<=j;i++){
      ans.push_back(arr[i]);
    }

    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;

    solve(arr,size,++j);
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    
    solve(arr,size,0);
}