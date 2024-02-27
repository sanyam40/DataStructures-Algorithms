public class selection_sort{

    public void selectionSort(int arr[], int n) {
		for(int i=0;i<n-1;i++){
            int minindex=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[minindex]){
                    minindex=j;
                }
            }
            int temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
	}
    public static void main(String[] args) {
        int []arr={0,2,0,1,2,2,1,0,0};
        selection_sort s=new selection_sort();
        s.selectionSort(arr,arr.length);
    }
}