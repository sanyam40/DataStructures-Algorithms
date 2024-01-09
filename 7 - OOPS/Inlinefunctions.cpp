/*

1.An inline functions is a regular functions that is defined by the inline keyword.
2.The code for an inline function is inserted directly into the code of the calling function by compiler 
while compiling,which can result in faster execution and less overhead compared to function calls.
3.Inseted of calling function the statment of functions are pasted in calling function.
4.Used with small sized functions.so that executables are small by compiler optimisation levels.

*/

#include<iostream>
using namespace std;

inline void display(int a){
    cout<<"The value of a is "<<a<<endl;
}

int main(){
    display(1);
    return 0;
}