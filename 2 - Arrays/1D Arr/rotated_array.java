class rotated_array{

    int pivot(int []arr){
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
        return start;
    }
    int binary(int arr[],int s,int e,int key){
        int start=s;
        int end=e;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            //FOR RIGHT PART
            if(key>arr[mid]){
                start=mid+1;
            }
            //FOR left part
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    public static void main(String[] args) {
        int []arr={7,8,1,3,5};
        int k=8;
        int n=arr.length;
        rotated_array r=new rotated_array();
        //Solution s=new Solution();
        int pivot=r.pivot(arr);
        if(k>arr[pivot] && k<=arr[n-1]){
            System.out.println(r.binary(arr,pivot,n-1,k));
        }
        else{
            System.out.println(r.binary(arr,0,pivot-1,k));
        }
 
    }
}