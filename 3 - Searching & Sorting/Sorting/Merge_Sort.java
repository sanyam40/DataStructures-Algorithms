public class Merge_Sort{

    static void mergesort(int arr[],int s,int e){
        // base case
        if(s>=e){
            return;
        }
        int mid=(s+e)/2;
        mergesort(arr, s, mid);
        mergesort(arr, mid+1, e);
        merge(arr,s,e);
    }

    static void merge(int arr[],int s,int e){
        int mid=(s+e)/2;
        int len1=mid-s+1;
        int len2=e-mid;

        int first[]=new int[len1];
        int second[]=new int[len1];

        int k=s;
        for(int i=0;i<len1;i++){
            first[i]=arr[k++];
        }

        int j=mid+1;
        for(int i=0;i<len1;i++){
            second[i]=arr[j++];
        }

        int index1=0;
        int index2=0;
        k=s; // mAIN ARRAY INDEX

        while(index1<len1&&index2<len2){
            if(first[index1]<second[index2]){
                arr[k++]=first[index1++];
            }
            else{
                arr[k++]=second[index2++];
            }
        }

        while(index1<len1){
            arr[k++]=first[index1++];
        }

        while(index2<len2){
            arr[k++]=second[index2++];
        }
    }
    public static void main(String[] args) {
        int arr[]={7,8,4,6,99,2,3,44};

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        mergesort(arr,0,arr.length-1);

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}