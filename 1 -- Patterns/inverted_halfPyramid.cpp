/*

*****
****
***
**
*

*/


#include <iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){    // formula : n-r  ( number of row =5 , r = row no)
            cout<<"*";
        }
        cout<<endl;
    }
}