#include <iostream>
using namespace std;

int test(int a){ // call by value ( Creating a new copy and return )
    return a+=1;
}

void test_2(int &a){ // call by refernce ( Changing in original variable )
    a+=1;
}

int main(){

    int a=1; // original variable 
    int &b=a; // copy/refernce vriable

    cout<< a << endl;
    cout<< b << endl;

    int n=test(a); // call by value
    cout << n << endl;    

    test_2(a); // call by refernce
    cout<< a << endl;
}