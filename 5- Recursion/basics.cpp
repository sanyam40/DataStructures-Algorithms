#include <iostream>
using namespace std;

int factorial(int n){

  if(n==1 || n==0) return 1;

  int ans;
  ans=n*(factorial(n-1));
  return ans;
}

void print(int n){
  if(n==1){
    cout<<n<<" ";
    return;
  }
  print(n-1);
  cout<<n<<" ";
}

int fib(int n){
  if(n==0) return 0;
  if(n==1) return 1;

  int ans=fib(n-1)+fib(n-2);
  return ans;
}

int main() {
  int n=4;
  int ans=factorial(4);
  print(6);
  cout<<endl;
  cout<< fib(7)<<endl;;
  cout<<ans;
  return 0;
}