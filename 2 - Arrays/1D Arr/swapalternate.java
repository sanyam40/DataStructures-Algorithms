/*IN THIS WE HAVE TO SWAP THE ALTERNATE NO EX : ELEMENTS AT 0 AND 1 INDEX SO
WE WILL USE VARIABLE i=0 which will go till last then we will swap the elements and increase the
value of i by 2 so that we can now change the value of 2 and 3index */

public class swapalternate {
    public static void main(String[] args) {
        int []arr={1,2,3,4,5,6,7};
        int i=0;
        while(i<arr.length-1){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i=i+2;
        }
        for(int k=0;k<arr.length;k++){
            System.out.print(arr[k]+" ");
        }
    }
}
