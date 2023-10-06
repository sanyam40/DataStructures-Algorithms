#include <iostream>
#include <vector>
using namespace std;

// Binary search in applicable only on sorted array
// T.C : O(logn)
int binarySearch(vector<int> *arr, int target)
{

    int start = 0, end = (*arr).size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if ((*arr)[mid] == target)
            return mid;
        else if ((*arr)[mid] > target)
        {
            end = mid - 1; // right
        }
        else if ((*arr)[mid] < target)
        {
            start = mid + 1; // left
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 8;

    int a = binarySearch(&arr, target);
    cout << a << endl;
}