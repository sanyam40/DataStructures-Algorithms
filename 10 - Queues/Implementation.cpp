#include <iostream>
using namespace std;

// push -> rear se hoga
// pop -> front se hoga

class Queue{

    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void push(int val){
        // check for full
        if(rear==size-1){
            cout << "Queue Overflow" << endl;
            return;
        }
        else if(front==-1 && rear==-1){
            // empty case
            front++;
            rear++;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }


};

int main(){

}