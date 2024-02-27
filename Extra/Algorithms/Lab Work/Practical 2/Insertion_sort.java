/* 
SANYAM 21CSU234 FS-IV-A
PRACTICAL DATE --> 18/01/23
Q.Implement Selection sort algorithm and compute its time and space complexities. 

BEST CASE TIME COMPLEXITY --> O(N)
WORST CASE TIME COMPLEXITY --> O(N^2)
AVERAGE CASE TIME COMPLEXITY --> O(N^2)
SPACE COMPLEXITY --> O(1)
*/

import java.util.*;

public class Insertion_sort{

    static void function(int arr[]){
        for(int i=1;i<arr.length;i++){
            int temp=arr[i];
            int j=i-1;
            for(;j>=0 && arr[j]>temp;j--){
                    //shift
                    arr[j+1]=arr[j];
            }
            arr[j+1]=temp;
            }
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

        System.out.println("AFTER SORTING : ");
        for(int j=0;j<arr.length;j++){
            System.out.print(arr[j]+" ");
        }
        sc.close();
    }
}