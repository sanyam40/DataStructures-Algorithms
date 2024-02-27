public class Max_inArray{

    static int max(int arr[],int i){
        if(i==arr.length){
            return Integer.MIN_VALUE;
        }

        int ans=arr[i];
        int rec=max(arr, i+1);
        return Integer.max(ans, rec);
    }

    public static void main(String[] args) {
        int arr[]={4,5,6,7};
        System.out.print(max(arr, 0));
    }
}