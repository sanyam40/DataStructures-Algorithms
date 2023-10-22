#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(char ch[],int n){

    int i=0;
    int j=n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    bool ans=palindrome(ch,strlen(ch));
    cout << ans << endl;
}