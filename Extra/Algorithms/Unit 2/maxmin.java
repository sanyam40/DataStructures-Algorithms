/* SANYAM 21CSU234 
--> MAX AND MIN USING DIVIDE AND CONQUER
RECURSION RELATION : T(n)=2T(n/2)+c */

public class maxmin{
    static void function(int i,int j,int max,int min,int arr[]){
        if(i==j){
            arr[i]=max=min;
        }
        if(i=j-1){
            if(arr[i]<arr[j]){
                max=arr[j];
                min=arr[i];
            }
            else{
                max=arr[i];
                min=arr[j];
            }
        }
        else{
            int mid=i+j/2;
            function(i, mid, max, min);
            function(mid+1, j, max, min);
            max=max(arr);
            min=min();
        }
    }
    public static void main(String[] args) {
        int arr[]={22,13,-5,-8,15,60,17,31,47};
        int max=0;
        int min=0;
        function(0, arr.length-1, max, min,arr);
    }
}