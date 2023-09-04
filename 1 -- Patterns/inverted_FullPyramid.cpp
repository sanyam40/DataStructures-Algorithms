/*

* * * * 
 * * * 
  * * 
   *

*/

#include <iostream>
using namespace std;

int main(){

    int n=4;
    for(int row=0;row<n;row++){
        //space
        for(int space=0;space<row;space++){
            cout<<" ";
        }
        //star
        for(int star=0;star<n-row;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
}