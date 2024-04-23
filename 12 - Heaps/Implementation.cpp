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

    int deletion(){
        int ans=arr[1];
        arr[1]=arr[size];
        size--;

        int index=1;
        while(index<size){
            int leftIndex=2*index;
            int rightIndex=2*index+1;

            int largest=index;

            if(leftIndex<=size && arr[largest]<arr[leftIndex]){
                largest=leftIndex;
            }
            if(rightIndex<=size && arr[largest]<arr[rightIndex]){
                largest=rightIndex;
            }

            if(index==largest){
                break;
            }
            else {
                swap(arr[index],arr[largest]);
                index=largest;
            }
        }
        return ans;
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
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    for(int i=1;i<=h.size;i++){ 
        cout<<h[i]<<" ";
    }

    cout << endl << h.deletion();

    for(int i=1;i<=h.size;i++){ 
        cout<<h[i]<<" ";
    }
}





