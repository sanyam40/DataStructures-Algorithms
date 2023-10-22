#include <iostream>
using namespace std;

void reverse(char ch[], int n) {

    int i = 0;
    int j = n - 1;

    while (i <= j) {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main() {

    char name[6];
    cin.getline(name, 100);

    cout << name << endl;  
    reverse(name, 6);
    cout << name << endl;
}
