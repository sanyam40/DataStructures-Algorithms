// T.C : O(N)

import stack.properties.*;

public class sort_stack{

    static void sortedinsert(int temp){
        if(stack.top==-1 || (stack.top!=-1 && stack.peek()<temp)){
            stack.push(temp);
            return;
        }

        int n=stack.peek();
        stack.pop();

        sortedinsert(temp);

        stack.push(n);
    }

    static void sorted(){
        if(stack.top==-1){
            return;
        }

        int temp=stack.peek();
        stack.pop();

        sorted();

        sortedinsert(temp);
    }
    public static void main(String[] args) {
        stack s=new stack(6);
        stack.push(5);
        stack.push(88);
        stack.push(7);
        stack.push(1);
        stack.push(0);
        System.out.println("BEFORE SORTING");
        stack.print();  
        sorted();
        System.out.println("AFTER SORTING");
        stack.print();  
    }
}