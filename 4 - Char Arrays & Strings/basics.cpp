#include <iostream>
#include <string.h>
using namespace std;

int findlen(char ch[],int size){
    int length=0;

    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

int main(){
    char ch[10];
    cin>>ch;
    int length=findlen(ch,10);
    cout << length;
    cout<< strlen(ch); // using stl

    /* creation
    char ch[10];

    // input 
    //cin>>ch;
    cin.getline(ch,100); // it will store all the space tab and enter

    // print
    cout <<ch;

    // char arrays ke last index pe null('/0') character store ho jata h 

    char value=ch[2];
    int valuee=(int)value;
    cout << valuee; */

}