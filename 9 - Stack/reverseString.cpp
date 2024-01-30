#include <iostream>
using namespace std;
#include <stack>

int main(){
    stack<char>st;
    string str="sanyam";

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        st.push(ch);
    }

    for(int i=0;!st.empty();i++){
        cout<<st.top();
        st.pop();
    }
}