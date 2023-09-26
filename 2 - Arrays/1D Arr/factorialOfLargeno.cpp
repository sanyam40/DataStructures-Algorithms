#include <iostream>
#include <vector>
using namespace std;

int maxx(vector<int> nums,int n){
    int max=INT16_MIN;

    for(int i=0;i<n;i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}

int factoriall(int max){
    int ans=max;
    for (int i = max - 1; i >= 1; i--) {
        ans = ans * i;
    }
    return ans;
}

int main(){

    vector<int> nums={2,3,4,5};
    int n=nums.size();

    int max=maxx(nums,n);
    cout << "Max No is : "<<max << endl;
    int factorial=factoriall(max);
    cout<< "Factorial is : "<<factorial<<endl;
}