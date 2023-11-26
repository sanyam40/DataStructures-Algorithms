#include <iostream>
#include <vector>
using namespace std;

// subSequences of a String
void fun(string str, string output,vector<string>& ans, int index) {

    if (index >= str.length()) {
        ans.push_back(output);
        return ;
    }

    char a = str[index];

    fun(str, output,ans, index + 1); // exclude

    output.push_back(a);
    fun(str, output,ans, index + 1); // include
}

int main() {

    string a = "abc";
    string output="";
    vector<string> ans;

    fun(a, output,ans, 0);

    for (auto ch : ans) {
        cout <<"->"<< ch <<endl;
    }

    return 0;
}
