/*

1
2*2
3*3*3
4*4*4*4

*/

#include <iostream>
using namespace std;

int main(){

    int n=4;

    for(int row=0;row<n;row++){
        for(int col=0;col<2*row+1;col++){
            if(col%2==1){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        cout<<endl;
    }
}