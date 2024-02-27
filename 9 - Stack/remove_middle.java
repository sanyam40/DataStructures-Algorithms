// TC : O(N)

import stack.properties.*;

public class remove_middle{

    static void solve(int count,int size){
        if(count==stack.size/2){
            stack.pop();
            return;
        }
        int temp=stack.peek();
        stack.pop();

        solve(count+1, size);

        stack.push(temp);
    }
    public static void main(String[] args) {
        stack.size=5;
        stack.push(3);
        stack.push(5);
        stack.push(9);
        stack.push(2);
        stack.push(4);
        stack.print();
        System.out.println();

        int count=0;
        solve(count,stack.size);

        stack.print();
    }
}