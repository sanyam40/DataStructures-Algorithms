/*
 SANYAM 21CSU234 FS-IV-A
 PRACTICAL DATE --> 11/01/22 
 Q.Implement and Calculate the time and space complexity of following programs:
   ii.	Fibonacci seriesS
 */

import java.util.*;

public class Fibanaci{

    static void without_recursion(int no){
        // TC -> O(N)
        // SC -> O(N)
        int arr[]=new int[no+1];
        
        arr[1]=1;
        arr[0]=0;
        
        for(int i=2;i<=no;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        System.out.println("WITHOUT RECURSION : "+arr[no]);
    }

    static int with_recursion(int n){
        // TC -> O(N)
        // SC -> O(1)
        if(n<=1){
            return n;
        }
        return with_recursion(n-1)+with_recursion(n-2);
    }

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("ENTER THE NUMBER : ");
        int no=sc.nextInt();

        without_recursion(no);

        int n=with_recursion(no);
        System.out.println("WITH RECURSION : "+n);
        sc.close();
    }
}