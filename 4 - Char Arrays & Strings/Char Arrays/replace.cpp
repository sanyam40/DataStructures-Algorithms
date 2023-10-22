#include <iostream>
using namespace std;

void replace(char ch[]){

    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
        i++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    replace(ch);
    cout<< ch << endl;
}