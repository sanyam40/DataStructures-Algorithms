#include <iostream>
using namespace std;

void solve(string &str,string &part){

    int found=str.find(part);

    if(found!=string::npos){
        string left=str.substr(0,found);
        string right=str.substr(found+part.size(),str.size());
        str=left+right;

        solve(str,part);
    }
    else{
        // BASE CASE 
        return;
    }
}

int main(){
    string str="daabcbaabcbc";

    string part="abc";
    solve(str,part);
    cout<<str;
}