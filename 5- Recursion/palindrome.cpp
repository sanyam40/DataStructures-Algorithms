#include <iostream>
using namespace std;

bool solve(string str,int i,int j){
    bool ans=true;;
    if(i>=j) return ans;

    if(str[i]!=str[j]){
        ans=false;
    }

    return solve(str,++i,--j);
}

int main(){
    string str="abba";

    cout<<solve(str,0,str.size());
}