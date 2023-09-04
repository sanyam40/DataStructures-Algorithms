/*

   *
  * *
 *   *
*     *
 *   *
  * *
   *

*/

#include <iostream>
using namespace std;

int main() {
    int n = 4; 

    // Print upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print the first asterisk
        cout << "*";
        // Print inner spaces and last asterisk
        if (i > 1) {
            for (int k = 1; k <= 2 * i - 3; k++) {
                cout << " ";
            }
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    // Print lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print the first asterisk
        cout << "*";
        // Print inner spaces and last asterisk
        if (i > 1) {
            for (int k = 1; k <= 2 * i - 3; k++) {
                cout << " ";
            }
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
    return 0;
}
