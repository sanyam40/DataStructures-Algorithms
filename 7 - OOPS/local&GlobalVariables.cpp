/*

-> Global Variable : 
1) written outside of function.
2) Accessible to all of function.(same copy).

-> Local Variable : 
1) Written inside of function.
2) Accessible inside that fn scope only.
3) scoped

*/

#include <iostream>
using namespace std;
 
int x=3; // Global Variable

int main(){

    x=20;
    cout<<x<<endl;

    for(int i=0;i<x;i++){
        cout<<i ; // i is local variable in function
    }
}