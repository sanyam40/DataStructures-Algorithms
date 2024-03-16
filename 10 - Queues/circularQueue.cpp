#include <iostream>
using namespace std;

// % can be used in circular queues but should avoid
// range of % 0 to size -1.

class Cqueue{

    public:
    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void push(int val){
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

    void pop(){
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

    void print(){
        for(int i=0;i<size;i++){
            cout << arr[i]<<" ";
        }
        cout << endl;
    }
};

int main(){

    Cqueue q(5);
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

    q.pop();
    q.pop();
    q.print();

    q.push(60);
    q.print();

    q.push(70);
    q.print();

    q.push(80);
    q.print();
}