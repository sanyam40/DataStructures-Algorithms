// THROUGH RECURSION TLE WILL BE THERE BCOZ OF OVERLAPPING ISSUE.

import java.util.Scanner;

public class Climbing_Stairs{

    static int solve(int cost[],int n){
        // BASE CASE
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }
        int ans=cost[n]+(Math.min(solve(cost,n-1)+solve(cost, n-2)));
        return ans;
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int cost[]=new int[n+1];
        cost[0]=10;
        cost[1]=15;
        cost[2]=20;
        solve(n,0);
        sc.close();
    }
}