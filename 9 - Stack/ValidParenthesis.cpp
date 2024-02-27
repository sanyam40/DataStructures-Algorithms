#include <iostream>
using namespace std;

/* Q.20 Leetocode : https://leetcode.com/problems/valid-parentheses/description/

TC : O(n)

*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                // push in stack
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    // closing bracket
                if(ch==')' && st.top()=='('){
                    st.pop();
                }
                else if(ch==']' && st.top()=='['){
                    st.pop();
                }
                else if(ch=='}' && st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
                }
                else{
                    return false;
                }
            }
        }
        if(st.size()==0) return true;
        else return false;
    }
};
