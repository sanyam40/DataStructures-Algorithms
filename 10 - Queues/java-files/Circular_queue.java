
// CIRCULAR QUEUE
// TC : O(1)

public class Circular_queue{
    int size;
    int front;
    int rear;
    int arr[];

    Circular_queue(int size){
        this.size=size;
        this.front=-1;
        this.rear=-1;
        arr=new int[size];
    }

    /* ADDING ELEMENT ( PUSH OPERATION )
    1.Check whether queue is Full – Check ((rear == SIZE-1 && front == 0) || (rear == front-1)).
    2.If it is full then display Queue is full. If queue is not full then, check if (rear == SIZE – 1 && front != 0) if it is true then set rear=0 and insert element. */
    void enqueue(int data){
        if(front==0 && rear==size-1 || rear==(front-1)%(size-1)){
            // QUEUE IS FULL
            System.out.println("QUEUE IS FULL");
        }
        else if(front==-1){
            // FIRST ELEMENT
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            // REAR KO AAGE LANE KE LIYE
            rear=0;
        }
        else{ // NORMAL FLOW
            rear++;
        }
        // PUSHING
        arr[rear]=data;
    }

    /*  REMOVE ELEMENT ( POP OPERATION )
    1.Check whether queue is Empty means check (front==-1).
    2.If it is empty then display Queue is empty. If queue is not empty then step 3
    3.Check if (front==rear) if it is true then set front=rear= -1 else check if (front==size-1), if it is true then set front=0 and return the element.*/
    int dequeue(){
        if(front==-1){
            // QUEUE IS EMPTY
            System.out.println("QUEUE IS EMPTY");
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            // SINGLE ELEMENT
            front=rear=-1;
        }
        else if(front==size-1){
            // TO MAINTAIN CYCLIC NATURE
            front=0;
        }
        else{
            // NORMAL FLOW
            front++;
        }
        return ans;
    }

    public static void main(String[] args) {
        Circular_queue q=new Circular_queue(8);
        q.enqueue(67);
        q.enqueue(55);
        System.out.println(q.dequeue());
        System.out.println(q.dequeue()); 
    }
}