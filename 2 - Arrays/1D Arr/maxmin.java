import java.util.*;
public class maxmin{

    static void max(int arr[]){
        int max=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        System.out.println("max no "+max);
    }

    void min(int arr[]){
        int min=Integer.MAX_VALUE;
        for(int i=0;i<arr.length;i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        System.out.println("min no "+min);

    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER THE SIZE OF ARRAY :");
        int size=sc.nextInt();
        int []arr=new int[size];
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        if(arr.length==0){
            int max=0;
            int min=0;
            System.out.println("MAX NO"+max);
            System.out.println("MIN NO"+min);
        }
        else{
            maxmin m1=new maxmin();
        maxmin.max(arr);
        m1.min(arr);
        }

    }
}