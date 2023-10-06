#include <iostream>
using namespace std;

void first(int arr[], int target, int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // will check in left
            // for first occ 
            // end = mid - 1;
            // for last occ
            start=mid+1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << ans;
}

int main()
{

    int arr[] = {1, 3, 7, 7, 5, 6};
    int n = 6;

    int target = 7;
    first(arr, target, n);
}