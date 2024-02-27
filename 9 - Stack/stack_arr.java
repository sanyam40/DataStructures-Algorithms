import java.util.Scanner;

// STACK IMPLEMENTATION USING ARRAY
// T.C : O(1)
// SANYAM 21CSU234 FS-III-A 
class stack_arr{
    // PROPERTIES
     int top;
     int arr[];
     int size;

     stack_arr(int size){
        this.size=size;
        arr=new int[size];
        top=-1;
     }
// TO ADD ELEMENT
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            System.out.println("STACK OVERFLOWED");
        }
    }
// TO REMOVE ELEMENT
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            System.out.println("STACK UNDERFLOWED");
        }
    }
// TO VIEW THE TOP ELEMENT
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            System.out.println("STACK IS EMPTY");
            return -1;
        }
     }
// TO CHECK IF STACK EMPTY OR NOT
    boolean isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void print(){
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
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTER THE SIZE FOR STACK : ");
        int size=sc.nextInt();
        stack_arr s1=new stack_arr(size);
        while(true){
            System.out.println("1.PUSH 2.POP 3.PEEK 4.ISEMPTY 5.EXIT");
            System.out.println();
            System.out.print("ENTER THE CHOICE : ");
            int choice=sc.nextInt();
            System.out.println();
            if(choice==1){
                System.out.print("ENTER THE DATA TO INSERT : ");
                int data=sc.nextInt();
                s1.push(data);
                s1.print();
            }
            else if(choice==2){
                s1.pop();
                s1.print();
            }
            else if(choice==3){
                int e=s1.peek();
                System.out.println("ELEMENT IS : "+e);
            }
            else if(choice==4){
                boolean e=s1.isempty();
                System.out.println("is empty : "+e);
            }
            else if(choice==5){
                break;
            }
            else{
                System.out.println("INCORRECT INPUT ! ");
            }
        }
        sc.close();
    }
}
