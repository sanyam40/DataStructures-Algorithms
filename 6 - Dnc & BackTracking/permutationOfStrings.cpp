#include <iostream>
using namespace std;

void ans(string &str,int i){

    if(i>=str.length()){
        cout << str << " ";
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        ans(str,i+1);
        // Backtracking 
        // to revert the changes to orignal string
        swap(str[i],str[j]);  // bcoz in by refernce string changes 
        // recursive call se wapis aate hue jo operation hote h usse backtracking bolte h.
    }
}

int main(){
    string str="abc";
    ans(str,0);
}