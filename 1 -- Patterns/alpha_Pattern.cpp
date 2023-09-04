/*

A
ABA
ABCBA
ABCDCBA

*/
#include <iostream>
using namespace std;

int main(){

    int n=4;
    
    for(int row=0;row<n;row++){
        char ch;
        for(int col=0;col<row+1;col++){
            ch=col+1+'A'-1;         
            cout<<ch;
        }
        for(char alph=ch;alph>'A';){
            alph--;
            cout<<alph;
        }
        cout<<endl;
    }
}