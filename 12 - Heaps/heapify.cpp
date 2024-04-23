#include <iostream>
using namespace std;

class Heap{
    public:
    int *arr;
    int size;
    int capacity;

    Heap(int capacity){
        this->capacity=capacity;
        this->arr=new int[capacity];
        this->size=0;
    }

// TC = O(logn)
    void insert(int val){
        if(size==capacity){
            cout<<"Heap Overflow";
            return;
        }
        size++;

        int index=size;
        arr[index]=val;

        // take value to correct position
        while(index>1){
            int parentIndex=index/2;
            if(arr[index]>arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index=parentIndex;
            }
            else break;
        }
    }

    void heapify(int *arr,int n,int index){
        int leftIndex=2*index;
        int rightIndex=2*index+1;
        int largest=index;

        // teeno se max element ke liye
        if(leftIndex<=n && arr[leftIndex]>arr[largest]){
            largest=leftIndex;
        }

        if(rightIndex<=n && arr[rightIndex]>arr[largest]){
            largest=rightIndex;
        }

        if(index!=largest){
            swap(arr[index],arr[largest]);
            index=largest;
            heapify(arr,n,index);
        }
    }

    // Build Heap from Array
    // TC : O(N)
    void buildHeap(int arr[],int n){
        for(int index=n/2;index<0;index--){
            heapify(arr,n,index);
        }
    }

    // Function to access elements by index
    int operator[](int index){
        if(index >= 1 && index <= size)
            return arr[index];
        else {
            cout << "Index out of range";
            return -1;
        }
    }
};

int main(){
    Heap h(20);
    h.insert(100);
    h.insert(50);
    h.insert(60);
    h.insert(30);
    h.insert(20);

    for(int i=1;i<=h.size;i++){ 
        cout<<h[i]<<" ";
    }


    for(int i=1;i<=h.size;i++){ 
        cout<<h[i]<<" ";
    }
}