class 10_first_lastoccurance{

    int firstocc(int []arr,int key){
        int start=0;
        int end=arr.length-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
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
        return ans;
    }

    int lastocc(int arr[], int key){
        int start = 0;
        int end = arr.length - 1;
        int ans = -1;
        int mid = (start + end) / 2;
        while (start <= end){
            if (arr[mid] > key){
            end = mid - 1;
            }
            //FOR LEFT PART
            else if (arr[mid] < key){
            start = mid + 1;
            }//FOR RIGHT PART
            else{
                ans = mid;
                start = mid + 1;
            }
            mid = (start + end) / 2;

        }
        return ans;
}
public static void main(String[] args) {
        int []arr={1,1,3,3,3,3,3,3,5};
        first_lastoccurance f1=new first_lastoccurance();
        System.out.println("FIRST OCC IS "+f1.firstocc(arr, 3));
        System.out.println("LAST OCC IS "+f1.lastocc(arr, 3));
        //FOR NO OF OCC OF THE GIVEN KEY
        int no_of_occ=(f1.lastocc(arr, 3)-f1.firstocc(arr, 3))+1;
        System.out.println("NO OF OCC IS "+no_of_occ);
    }
}