public class bubble_sort{

    public void bubble(int arr[], int n) {
		for(int i=0;i<n-1;i++){
            //for round 1 to n-1;
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
	}
    public static void main(String[] args) {
        int []arr={0,2,0,1,2,2,1,0,0};
        bubble_sort s=new bubble_sort();
        s.bubble(arr,arr.length);
    }
}