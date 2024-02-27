package stack.properties;

public class stack{
    public static int top;
    public static int arr[];
    public static int size;

    public stack(int size){
        stack.size=size;
        arr=new int[size];
        top=-1;
     }
// TO ADD ELEMENT
    public static void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            System.out.println("STACK OVERFLOWED");
        }
    }
// TO REMOVE ELEMENT
    public static int pop(){
        if(top>=0){
            return arr[top--];
        }
        else{
            System.out.println("STACK UNDERFLOWED");
            return-1;
        }
    }
// TO VIEW THE TOP ELEMENT
    public static int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            System.out.println("STACK IS EMPTY");
            return -1;
        }
     }
// TO CHECK IF STACK EMPTY OR NOT
    public boolean isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    public static void print(){
        if(top==-1){
            return;
        }
        int n=peek();
        System.out.print(n+" ");
        System.out.println();
        pop();
        print();
        push(n);
    }
}