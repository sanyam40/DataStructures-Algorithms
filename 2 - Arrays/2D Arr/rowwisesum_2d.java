public class rowwisesum_2d{

    void printsum(int [][]arr){
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<4;j++){
                sum=sum+arr[i][j];

            }
            System.out.println(sum);
        }
        

    }
    public static void main(String[] args) {
        rowwisesum_2d r=new rowwisesum_2d();
        int[][] arr={{1,2,3,4},{5,6,7,8,9},{10,11,12,13}};
        r.printsum(arr);
    }
}