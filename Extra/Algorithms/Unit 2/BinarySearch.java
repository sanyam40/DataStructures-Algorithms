/* SANYAM 21CSU234 
--> BINARY SEARCH USING RECURSION
RECURSION RELATION : T(n)=T(n/2)+c */

public class BinarySearch{
    static int function(int key,int arr[],int start,int end){
        if(start==end){
            if(arr[start]==key){
                return start;
            }
            else{
                return -1;
            }
        }
        else{
            int mid=start+(end-start)/2;
            if(key==arr[mid]){
                return mid;
            }
            if(key<arr[mid]){
                // FOR MOVING IN LEFT PART
                return function(key, arr, start, mid);
            }
            else{
                 // FOR MOVING IN RIGHT PART
                return function(key, arr, mid+1, end);
            }
        }
    }
    public static void main(String[] args) {
        int arr[]={3,4,6,8,9};
        System.out.println(function(2, arr, 0, arr.length-1));    
    }
}