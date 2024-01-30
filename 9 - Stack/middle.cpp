#include <iostream>
#include <stack>
using namespace std;

void getElement(stack<int> &st, int &pos, int &result) {
    if (pos == 1) {
        result = st.top();
        return;
    }
    pos--;
    int temp = st.top();
    st.pop();

    getElement(st, pos, result);
    st.push(temp);
}

int solve(stack<int> &st) {
    int size = st.size();
    if (st.empty()) {
        return -1;
    } else {
        int pos = 0;
        if (size & 1) {
            pos = size / 2 + 1;
        } else {
            pos = size / 2;
        }
        int ans;
        getElement(st, pos, ans);
        return ans;
    }
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(33);
    st.push(47);
    st.push(25);
    st.push(37);

    cout << solve(st);

    /*
    int size=st.size();
    int mid;

    if(size%2==0){
        mid=size/2-1;
    }else mid=size/2;

    for(int i=0;i<mid;i++){
        st.pop();
    }

    cout<<st.top(); */
}