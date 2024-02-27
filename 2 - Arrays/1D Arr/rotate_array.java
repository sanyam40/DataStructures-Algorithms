public class rotate_array{

    void rotate(int []nums,int k){
        int n=nums.length;
        int temp[]=new int[nums.length];
        for(int i =0;i<n;i++) {
            temp[(i+k)%n] = nums[i];
            }
            for(int i=0;i<nums.length;i++) 
          {
            nums[i] = temp[i];
          }
        for(int s=0;s<nums.length;s++){
            System.out.print(nums[s]+" ");
        }

    }
    public static void main(String[] args) {
        int []arr={1,2,3,4,5,6,7};
        int k=3;
        rotate_array r=new rotate_array();
        r.rotate(arr,k);
    }
}