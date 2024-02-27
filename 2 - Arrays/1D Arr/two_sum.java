class two_sum{


    void sum(int []nums,int target){
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[j]+nums[i]==target){
                    System.out.println("VALUE ARE : "+i+" "+j);
                }
            }
        }
        }

    
    public static void main(String[] args) {
        int []arr={2,7,11,15};
        int target=9;
        two_sum s=new two_sum();
        s.sum(arr,target);

    }
}