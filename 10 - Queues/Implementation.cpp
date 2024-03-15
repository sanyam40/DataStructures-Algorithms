#include <iostream>
using namespace std;

// push -> rear se hoga
// pop -> front se hoga

// TC : 0(1) in all cases as middle elements aren't accessed

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

    void pop(){
        if(front==-1 && rear==-1){
            cout << "Queue Underflow" << endl;
            return;
        }
        else if(front==rear){
            // single element case
            arr[front]=-1;
            // reset front & rear
            front =-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }

    bool isEmpty(){
        if(front==-1 && rear==-1) return true;
        else return false;
    }

    int getSize(){
        if(front==-1 && rear==-1) return 0;
        else return rear-front+1;
    }

    int getFront(){
        if(front==-1){
            cout << "No Element in queue" ;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear(){
        if(rear==-1){
            cout << "No element is queue";
            return -1;
        }
        else return arr[rear];
    }

    void print(){
        for(int i=0;i<size;i++){
            cout << arr[i]<<" ";
        }
        cout << endl;
    }
};

int main(){

    Queue q(5);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    cout << q.getSize()<<endl;

    q.pop();
    q.print();
    cout << q.getSize()<<endl;

    q.push(100); // overflow 

    cout << q.getFront() << endl;
}