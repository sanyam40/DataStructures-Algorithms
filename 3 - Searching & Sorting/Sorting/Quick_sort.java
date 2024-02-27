/*
-- Quick Sort follows a recursive algorithm.
• It divides the given array into two sections using a partitioning element called as pivot.
- The division performed is such that-
• All the elements to the left side of pivot are smaller than pivot.
• All the elements to the right side of pivot are greater than pivot.
 After dividing the array into two sections, the pivot is set at its correct position.
Then, sub arrays are sorted separately by applying quick sort algorithm recursively.

 */

// T.C : O(NLOGN)
public class Quick_sort{

    static void quick_sort(int arr[],int s,int e){
        // BASE CASE
        if(s>=e){
            return;
        }
        // MAKING PARITION
        int p=parition(arr,s,e);

        // LEFT PART SORT 
        quick_sort(arr,s,p-1);
        // RIGHT PART SORT
        quick_sort(arr,p+1,e);
    }

    static int parition(int arr[],int s,int e){

        int pivot=arr[s];
        int count=0;

        //count of elements smaller than pivot element
        for(int i=s+1;i<=e;i++){
            if(arr[i]<=pivot){
                count++;
            }
        }

        // PIVOT KO CORRECT PLACE PR DAALNA
        int pivot_index=s+count;

        int temp=pivot;
        arr[s]=arr[pivot_index];
        arr[pivot_index]=temp;

        int i=s,j=e;

        while(i<pivot_index && j>pivot_index){
            // CHCECKING IF IN LEFT PART ELEMENT IS LOWER THAN PIVOT OR NOI
            while(arr[i]<=pivot){
                i++;
            }
            // CHCECKING IF IN RIGHT PART ELEMENT IS GREATER THAN PIVOT OR NOI
            while(arr[j]>pivot){
                j--;
            }
            // AGAR KOI ELEMENT LEFT SIDE MAI PIVOT SE BADA MILTA H YA RIGHT MAI CHOTA TOH SWAP
            if(i<pivot_index && j>pivot_index){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                s++;
                i--;
            }
        }
        return pivot_index;
    }
    public static void main(String[] args) {
        int arr[]={3,1,4,5,2};
        int s=0;
        int e=arr.length-1;

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        quick_sort(arr, s, e);

        for(int j=0;j<arr.length;j++){
            System.out.print(arr[j]+" ");
        }
    }
}