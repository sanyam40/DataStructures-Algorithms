public class unique_elements{
    public static void main(String[] args) {
        int []arr={2,3,3,4,2,5,4};

        for(int i=0;i<arr.length;i++){
            boolean isunique=false;
            for (int k=0;k<i;k++){
                if(arr[i]==arr[k]){
                    isunique=true;
                    break;
                }
            }
            if(!isunique){
                System.out.println(arr[i]);
            }
        }
    }
}
