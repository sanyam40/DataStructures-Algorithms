public class insertion_sort{


    public void insertionSort(int n , int[] arr) {
		for(int i=1;i<n;i++){
            int temp=arr[i];
            int j=i-1;
            for(;j>=0;j--){
                if(arr[j]>temp){
                    //shift
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1]=temp;
            }
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");
            }
	}

    public static void main(String[] args) {
        int []arr={4,12,11,20,19};
        insertion_sort i=new insertion_sort();
        i.insertionSort(arr.length,arr);
    }
}