/*
 SANYAM 21CSU234 FS-IV-A
 PRACTICAL DATE --> 11/01/22
 Q.Implement and Calculate the time and space complexity of following programs:
   i.	Factorial of a number
 */

import java.util.*;

public class Factorial{

    static void without_recursion(int n){
        // TC -> O(N)
        // SC -> O(1)
        int ans=1;
        while(n>0){
            ans=ans*n;
            n--;
        }
        System.out.println("WITHOUT RECURSION : "+ans);
    }


    static int with_recursion(int n){
        // TC -> O(N)
        // SC -> O(N)
        if(n==0){ // BASE CASE
            return 1;
        }
        return n*with_recursion(n-1);
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("ENTER THE NUMBER : ");
        int no=sc.nextInt();

        without_recursion(no);

        int ans=with_recursion(no);
        System.out.println("WITH RECURSION : "+ans);

        sc.close();
    }
}