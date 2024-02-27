class binarysearch{

    int binary(int arr[],int key){
        int start=0;
        int end=arr.length-1;
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
        int arr[]={2,4,6,8,9,13,45,56,78};
        binarysearch b1=new binarysearch();
        //b1.binary(arr,56);
        System.out.println(b1.binary(arr,56));
    }
}