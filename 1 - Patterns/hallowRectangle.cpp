/*

*****
*   *
*   *
*****

*/


#include <iostream>
using namespace std;

int main(){

    for(int i=0;i<4;i++){
        if(i==0 || i==3){
            for(int star=0;star<5;star++){
                cout<<"*";
            }
        }
        if(i==1 || i==2){
            cout<<"*";
            for(int space=0;space<3;space++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}