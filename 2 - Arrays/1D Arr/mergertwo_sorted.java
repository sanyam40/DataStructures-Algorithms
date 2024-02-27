public class mergertwo_sorted{

    void merge(int []arr1,int []arr2,int []arr3){
        int i = 0, j = 0;
        int k = 0;
        int n=arr1.length;
        int m=arr2.length;
        while( i<n && j<m) {
            if(arr1[i] < arr2[j]){
                arr3[k++] = arr1[i++];
            }
            else{
                arr3[k++] = arr2[j++];
            }
        }
    //copy first array k element ko
    while(i<n) {
            arr3[k++] = arr1[i++];
        }
    
        //copy kardo second array k remaining element ko
        while(j<m) {
            arr2[k++] = arr2[j++];
        }
        
    }
    public static void main(String[] args) {
        int []arr1={1,3,5,7,9};
        int []arr2={2,4,6};
        int []arr3=new int[8];
        mergertwo_sorted m=new mergertwo_sorted();
        m.merge(arr1,arr2,arr3);
        for(int dd=0;dd<arr3.length;dd++){
            System.out.print(arr3[dd]+" ");
        }
    }
}
