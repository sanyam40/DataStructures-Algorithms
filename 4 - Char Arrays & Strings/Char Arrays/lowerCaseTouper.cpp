#include <iostream>
using namespace std;

void convert(char ch[],int n){

    int index=0;

    while(ch[index]!='\0'){
        char curr=ch[index];
        if(curr>='a' && curr <='z'){
            ch[index]=curr-'a'+'A';
        }
        index++;
    }
}

int main(){

    char ch[100];
    int n=10;
    cin.getline(ch,100);

    cout << ch << endl;
    convert(ch,10);
    cout << ch;
}