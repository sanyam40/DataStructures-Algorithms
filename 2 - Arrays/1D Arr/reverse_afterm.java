public class reverse_afterm{

    void fun(int []arr,int m){
        int start=m+1;
        int end=arr.length-1;
        int temp;
        while(start<=end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        for(int k=0;k<arr.length;k++){
            System.out.print(arr[k]+" ");
        }

    }


    public static void main(String[] args) {
        int []arr={1,2,3,4,5,6};
        int m=3;
        reverse_afterm r=new reverse_afterm();
        r.fun(arr, m);

    }
}