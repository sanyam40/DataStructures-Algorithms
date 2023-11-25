#include <iostream>
using namespace std;

int ans(int arr[], int s, int e, int target)
{

    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return ans(arr, mid + 1, e, target);
    }
    else
    {
        return ans(arr, s, mid - 1, target);
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40};
    int target = 40;
    int size = 4;

    int found = ans(arr, 0, size - 1, target);
    cout << found;
}