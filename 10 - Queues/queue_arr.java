/* 
    QUEUES :
 -- PUSH=> REAR
 -- POP=> FRONT

 TC : O(1)

 */

 public class queue_arr{
    int arr[];
    int size;
    int front;
    int rear; 

    queue_arr(int size){
        this.size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }
// ADDING ELEMENT ( PUSH OPERATION )
    void enqueue(int data){
        //checking full or not
        if(rear==size){
            System.out.println("QUEUE IS FULL");
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

// REMOVE ELEMENT ( POP OPERATION )   
    int dequeue(){
        // checking empty or not
        if(front==rear){
            return -1;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    } 

    int front(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    boolean isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        
    }
 }