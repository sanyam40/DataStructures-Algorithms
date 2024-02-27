// T.C. : O(N)
import stack.properties.*;

public class insertat_last{

    static public void insert(){
        int n=11;
        if(stack.top==-1){
            stack.push(n);
            return;
        }
        int temp=stack.peek();
        stack.pop();

        insert();

        stack.push(temp);
    }
    public static void main(String[] args) {
        stack s=new stack(5);
        stack.push(56);
        stack.push(34);
        stack.push(89);
        stack.push(86);
        System.out.println("STACK BEFORE INSERTING ");
        stack.print();

        insert();
        System.out.println("STACK AFTER INSERTING ");
        stack.print();
    }
}