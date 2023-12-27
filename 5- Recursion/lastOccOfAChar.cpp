#include <iostream>
using namespace std;

// T.C : O(n)
// S.C : O(n)
void solve(string str,char ch,int i,int size,int &ans){
    // base case
    if (i >= size) {
        return;
    }

    if (ch == str[i]) {
        ans = i;
    }

    solve(str, ch, ++i, size, ans);
}

int main(){
    string str="abcddefg";
    char ch='d';
    int size=str.length();
    int ans=-1;

    solve(str,ch,0,size,ans);

    cout<<ans;
}