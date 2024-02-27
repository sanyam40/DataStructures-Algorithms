import java.util.*;

// STACK IMPLEMENTATION USING LINKED LIST
// T.C : O(1)
// SANYAM 21CSU234 FS-III-A

public class stack_LL{
    Node top;
    int size;

    stack_LL(){
        this.top=null;
        this.size=0;
    }

    class Node{
        int data;
        Node next;

        Node(int data){
            this.data=data;
        }
    }
// TO ADD ELEMENT
    public void push(int data){
        
        Node temp=new Node(data);
        temp.next=top;
        top=temp;
        size++;
    }
// TO CHECK IF STACK EMPTY OR NOT
    public boolean isEmpty() {
        return top == null;
    }
// TO VIEW THE TOP ELEMENT
    public int peek(){
        if (isEmpty()){
            System.out.println("The stack is empty");
            System.exit(-1);
        }
        return top.data;
    }
// TO REMOVE ELEMENT
    public void pop(){
        if (isEmpty()){
            System.out.println("Stack Underflow");
            System.exit(-1);
        }
        this.top=this.top.next;
        size--;
    }
// TO CHECK THE SIZE
    public int size(){
        return size;
    }
// TO PRINT THE STACK
    public void print(){
        Node temp=top;
        while(temp!=null){
            System.out.print(temp.data+" ");
            System.out.println();
            temp=temp.next;
        }
    }

// TO CHECK THE SIZE
    public int sizee(){
        return size;
    }    
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        stack_LL s1=new stack_LL();
        while(true){
            System.out.println("1.PUSH 2.POP 3.PEEK 4.EXIT");
            System.out.println();
            System.out.print("ENTER THE CHOICE : ");
            int choice=sc.nextInt();
            System.out.println();
            if(choice==1){
                System.out.print("ENTER THE DATA TO INSERT : ");
                int data=sc.nextInt();
                s1.push(data);
                int sizeee=s1.sizee();
                s1.print();
                System.out.println("STACK SIZE IS : "+sizeee);
                System.out.println();
            }
            else if(choice==2){
                s1.pop();
                int sizeee=s1.sizee();
                s1.print();
                System.out.println("STACK SIZE IS : "+sizeee);
                System.out.println();
            }
            else if(choice==3){
                int e=s1.peek();
                System.out.println("ELEMENT IS : "+e);
                System.out.println();
            }
            else if(choice==4){
                break;
            }
            else{
                System.out.println("INCORRECT INPUT ! ");
                System.out.println();
            }
        }
        sc.close();
        System.out.println("EXIT !!");
    }
}     
