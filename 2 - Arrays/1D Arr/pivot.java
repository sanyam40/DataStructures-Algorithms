public class pivot {
    public static void main(String[] args) {
        int []arr={7,9,1,2,3};
        int start=0;
        int end=arr.length-1;
        int mid=start+(end-start)/2;
        while(start<end){
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        System.out.println(start);
    }
    
}
