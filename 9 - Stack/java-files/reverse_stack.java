// TC : O(N)

import stack.properties.*;

public class reverse_stack{

    public static void reverse_recursive(){
        if(stack.top==-1){
            return;
        }
        int n=stack.peek();
        stack.pop();

        reverse_recursive();

        insert(n);

    }
    public static void insert(int n){
        if(stack.top==-1){
            stack.push(n);
            return;
        }
        int temp=stack.peek();
        stack.pop();

        insert(n);

        stack.push(temp);
    }
    public static void main(String[] args) {
        stack s=new stack(5);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(8);

        stack.print();
// NORMALLY USING PUSH AND POP

        /* while(stack.top!=-1){
            int ans=stack.peek();
            System.out.print(ans+" ");
            stack.pop();
        } */

// USING RECURSION 
        reverse_recursive();
        System.out.println("AFTER REVERSE");
        stack.print();
    }
}