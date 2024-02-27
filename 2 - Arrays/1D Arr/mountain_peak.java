class mountain_peak{

    int peak(int []arr){
        int start=0;
        int end=arr.length-1;
        int mid=start+(end-start)/2;
        //int peak=0;
        while(start<end){
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return arr[start];
    }



    public static void main(String[] args) {
        int []arr={3,4,7,1};
        mountain_peak p1=new mountain_peak();
        System.out.println("PEAK ELEMENT IS : "+p1.peak(arr));

    }
}