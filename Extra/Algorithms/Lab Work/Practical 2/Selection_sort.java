/*
SANYAM 21CSU234 FS-IV-A
PRACTICAL DATE --> 
Implement Selection sort algorithm and compute its time and space complexities. 
*/

import java.util.*;

public class Selection_sort{

    static void function(int arr[]){

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.print("ENTER SIZE OF ARRAY : ");
        int size=sc.nextInt();
        System.out.println();
        
        int arr[]=new int[size];
        System.out.print("ENTER THE ELEMENTS : ");
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }

        function(arr);

        for(int j=0;j<arr.length;j++){
            System.out.println(arr[j]);
        }

        sc.close();
    }
}