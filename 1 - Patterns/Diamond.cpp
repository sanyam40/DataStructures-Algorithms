/*

   * 
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *

*/

#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    // Full pyramid
    for (int i = 0; i < n; i++)
    {
        // space
        for (int col = 0; col < n - i - 1; col++)
        {
            cout << " ";
        }
        // star
        for (int col = 0; col < i + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // half pyramid
    for (int row = 0; row < n; row++)
    {
        // space
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        // star
        for (int star = 0; star < n - row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}