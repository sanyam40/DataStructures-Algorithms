#include <iostream>
using namespace std;

// T.C : O(n) , S.C : O(n)
void solve(string &str,int i,int j){
    if(i>=j){ // base case
        cout << str;
        return;
    }
    swap(str[i],str[j]);
    solve(str,++i,--j); // recursive call 
}

int main(){
    string str="abcd";

    solve(str,0,str.length()-1);
}