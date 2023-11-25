#include <iostream>
using namespace std;

int ans(int arr[],int n,int index){

  if(index>=n) return true;

  if(arr[index]>arr[index-1]){
    bool a=ans(arr,n,index+1);
    return a;
  }
  else return false;
}

int main() {
  cout << "Hello world!" << endl;
  int arr[]={10,20,30,5};
  bool a=ans(arr,4,1);
  cout << a;
  return 0;
}