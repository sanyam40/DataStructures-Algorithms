#include <iostream>
using namespace std;

/*  TC : O(nlogn)
    Step 1: Break into 2 parts
    Step 2: Recursion
    Step 3: Merge 2 Sorted Arrays
*/

void merge(int arr[], int s, int e)
{
    // Just making two arrays for merging from left and right part
    int mid = (s + e) / 2;
    int *left = new int[mid - s + 1];
    int *right = new int[e - mid];

    // coping value from original array
    int k = s; // k is starting index of left array
    for (int i = 0; i < mid - s + 1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < e - mid; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge 2 sorted arrays logic implemented here
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < mid - s + 1 && rightIndex < e - mid)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // if element in one of the element left bcoz of small size then other
    while (leftIndex < mid - s + 1)
    { // for left
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    } // for right
    while (rightIndex < e - mid)
    {
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
    delete[] left; // relesing the dynamic memory
    delete[] right;
}

void mergeSort(int arr[], int s, int e)
{
    // base Case
    if (s >= e)
    { // invalid array and single element array
        return;
    }
    int mid = (s + e) / 2;
    // Break
    mergeSort(arr, s, mid);     // left part
    mergeSort(arr, mid + 1, e); // right part

    merge(arr, s, e); // merge 2 sorted arrays
}

int main()
{
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;
    int s = 0;
    int e = size - 1;

    mergeSort(arr, s, e);
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}