/*

ENTER VALUE OF N : 8
********
*      *
*      *
*      *
*      *
*      *
*      *
********

*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "ENTER VALUE OF N : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int star = 0; star < n; star++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            for (int space = 0; space < n - 2; space++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
}