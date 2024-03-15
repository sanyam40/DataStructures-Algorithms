/*

 1.TOP DOWN APPROACH -> RECURSION + MEMORIZATION
 2.BOTTOM UP APPROACH -> TABULATION

 f(n)=f(n-1)+f(n-2)

 TC -> O(N)
 SC -> O(N)

*/

import java.util.Scanner;
public class fibanacci_number {

    static int fib(int n,int dp[]){
        // BASE CASE
        if(n<=1){
            return n;
        }
        // STEP 3
        if(dp[n]!=-1){
            return dp[n];
        }
        // STEP 2 
        dp[n]=fib(n-1,dp)+fib(n-2,dp);
        return dp[n];
    }
    public static void main(String[] args) {

        Scanner sc =new Scanner(System.in);
        System.out.print("ENTER THE NUMBER : ");
        int no=sc.nextInt();

 
        // --> FOR TOP DOWN APPROACH
        int dp[]=new int[no+1];
        for(int i=0;i<=no;i++){
            dp[i]=-1;
        }
         System.out.println(fib(no,dp));
         
        // --> FOR BOTTOM UP APPROACH
        // STEP 1
        int dp2[]=new int[no+1];
        // STEP 2
        dp2[1]=1;
        dp2[0]=0;
        // STEP 3
        for(int i=2;i<=no;i++){
            dp2[i]=dp2[i-1]+dp2[i-2];
        }
        System.out.println(dp2[no]);
          
        // --> SPACE OPTIMISATION  SC-O(1)
        int prev1=1;
        int prev2=0;
        if(no==0){
            System.out.println(prev2);
        }
        for(int i=2;i<=no;i++){
            int curr=prev1+prev2;
            // shift
            prev2=prev1;
            prev1=curr;
        }
        System.out.println(prev1);
    }
}
