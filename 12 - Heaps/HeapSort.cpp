#include <iostream>
using namespace std;

class Heap
{
public:
    int *arr;
    int size;
    int capacity;

    Heap(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[capacity];
        this->size = 0;
    }

    // TC = O(logn)
    void insert(int val)
    {
        if (size == capacity)
        {
            cout << "Heap Overflow";
            return;
        }
        size++;

        int index = size;
        arr[index] = val;

        // take value to correct position
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
                break;
        }
    }

    void heapify(int *arr, int n, int index)
    {
        int leftIndex = 2 * index;
        int rightIndex = 2 * index + 1;
        int largestKaIndex = index;

        // teno me se max lao
        if (leftIndex <= n && arr[leftIndex] > arr[largestKaIndex])
        {
            largestKaIndex = leftIndex;
        }
        if (rightIndex <= n && arr[rightIndex] > arr[largestKaIndex])
        {
            largestKaIndex = rightIndex;
        }
        // after these 2 conditions largestKaIndex will be pointing towards largest elemnt among 3
        if (index != largestKaIndex)
        {
            swap(arr[index], arr[largestKaIndex]);
            // ab recursion sambhal lega
            index = largestKaIndex;
            heapify(arr, n, index);
        }
    }

    void buildHeap(int arr[], int n)
    {
        for (int index = n / 2; index > 0; index--)
        {
            heapify(arr, n, index);
        }
    }

    // Function to access elements by index
    int operator[](int index)
    {
        if (index >= 1 && index <= size)
            return arr[index];
        else
        {
            cout << "Index out of range";
            return -1;
        }
    }

    void heapSort(int arr[], int n)
    {
        while (n != 1)
        {
            swap(arr[1], arr[n]);
            n--;
            heapify(arr, n, 1);
        }
    }
};

int main()
{
    int arr[] = {-1, 5, 10, 15, 20, 25, 12};
    Heap heap(6); // Creating Heap object

    heap.buildHeap(arr, 6); 

    for (int i = 1; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heap.heapSort(arr, 6);

    for (int i = 1; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
