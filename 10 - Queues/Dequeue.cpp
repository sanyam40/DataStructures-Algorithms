// Double Ended Queues
// In dequeue we have -> pop and push from both sides (front & back).

#include <iostream>
using namespace std;

class Dequeue{

    public:
    int *arr;
    int size;
    int front;
    int rear;

    Dequeue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void pushFront(int val){
        // overflow
        if(front==0 && rear==size-1 || rear==front-1){
            cout << "Overflow" << endl;
        }

        // single element
        else if(front==-1 && rear-1){
            front++;
            rear++;
            arr[front]=val;
        }
        // circular case
        else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=val;
        }
        // normal case
        else{
            front--;
            arr[front]=val;
        }
    }

    void pushBack(int val){
        // overflow
        // special case important
        if(front==0 && rear==size-1 || rear==front-1){
            cout << "Overflow" << endl;
        }

        // empty case -> first element
        // important case
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        // circular nature
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=val;
        }
        // normal flow
        else{
            rear++;
            arr[rear]=val;
        }
    }

    void popFront(){
        // underflow
        if(front==-1 && rear==-1){
            cout << "Undeflow" << endl;
        }
        // 1 element
        // important case
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        // circular
        else if(front==size-1){
            arr[front]=-1;
            front =0;
        }
        // normal flow
        else{
            arr[front]=-1;
            front++;
        }
    }

    void popBack(){

        // undeflow
        if(front==-1 && rear==-1) cout << "Undeflow";

        else if(front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        // circular case
        else if(rear==0){
            arr[rear]=-1;
            rear=size-1;
        }
        else{
            arr[rear]=-1;
            rear--;
        }
    }
};

int main(){

}