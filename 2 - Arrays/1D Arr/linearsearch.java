/*THIS CODE WILL SEARCH A SPECIFY NUMBER IN THE ARRAY AND RETURN THE INDEX OF THAT 
 * PARTICULAR INDEX.
 */


import java.util.*;

public class linearsearch{
    int linear(int arr[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTER THE ELEMENT : ");
        int no=sc.nextInt();
        for(int i=0;i<arr.length;i++){
            if(arr[i]==no){
                return i;
            }
        }
        return -1;
    } 

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTER THE SIZE FOR ARRAY : ");
        int size=sc.nextInt();
        int []arr=new int [size];
        System.out.println("ENTER THE ELEMENTS FOR ARRAY : ");
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        linearsearch l1=new linearsearch();
        int a=l1.linear(arr);
        if(a==-1){
            System.out.print("NO,THIS ELEMNETS DOESN'T EXIST");
        }
        else{
            System.out.print("YES "+"EXIST AT "+a+" INDEX");
        }
    }
}