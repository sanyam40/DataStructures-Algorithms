public class Print_Array{

    static void function(int[] arr,int i){
        // BASE CASE
        if(i==arr.length){
            return;
        }

        // TASK TO BE EXCUTED
        System.out.print(arr[i]+" ");

        // RECURSIVE CALL 
        function(arr, i+1);
    }

    static void reverse_print(int []arr,int i){
        /*if(i==arr.length){
            return;
        }
        // RECURSIVE CALL 
        function(arr, i+1);
        // TASK TO BE EXCUTED
        System.out.print(arr[i]+" "); */

        if(i==-1){
            return;
        }
        System.out.print(arr[i]+" ");
        // RECURSIVE CALL
        reverse_print(arr, i-1);
    }
    public static void main(String[] args) {
        int arr[]={2,3,7,9};
        int i=0;
    
        function(arr,i);
        System.out.println();
        reverse_print(arr, arr.length-1);
    }
}