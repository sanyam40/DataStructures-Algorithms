public class largestrowsum_2d{
    
    void largest(int [][]arr){
        int max=Integer.MIN_VALUE;
        int no=-1;
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<4;j++){
                sum=sum+arr[i][j];

            }
            if(sum>max){
                max=sum;
                no=i;
            }
        }
        System.out.println(max);
        System.out.print(no);

    }
    public static void main(String[] args) {
        largestrowsum_2d r=new largestrowsum_2d();
        int[][] arr={{1,2,3,4},{5,6,7,8,9},{10,11,12,13}};
       r.largest(arr);
    }
}