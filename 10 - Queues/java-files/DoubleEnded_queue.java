public class DoubleEnded_queue{
    int arr[];
    int front;
    int rear;
    int size;

    DoubleEnded_queue(int size){
        this.size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    boolean push_front(int data){
        // check full or not
        if(front==0 && rear==size-1 || rear==(front-1)%(size-1)){
            System.out.println();
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=data;
        return true;
    }

    void push_rear(int data){
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

    int pop_front(){
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

    int pop_rear(){
        if(front==-1){
            // QUEUE IS EMPTY
            System.out.println("QUEUE IS EMPTY");
            return -1;
        }
        int ans=arr[front];
        arr[rear]=-1;
        if(front==rear){
            // SINGLE ELEMENT
            front=rear=-1;
        }
        else if(rear==0){
            // TO MAINTAIN CYCLIC NATURE
            rear=size-1;
        }
        else{
            // NORMAL FLOW
            rear--;
        }
        return ans;
    }
     
    public static void main(String[] args) {
        
    }
}