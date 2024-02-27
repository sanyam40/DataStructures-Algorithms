public class allocated_books{

    boolean ispossible(int []arr,int s,int e,int mid,int m){
        int student=1;
        int pagesum=0;
        for(int i=0;i<arr.length;i++){
            if(pagesum+arr[i]<=mid){
                pagesum=pagesum+arr[i];
            }
            else{
                student++;
                if(student>m || arr[i]>mid){
                    return false;
                }
                pagesum=arr[i];
            }
            
        }
        return true;
    }
    
    
    
    void allocate(int []arr,int m){
        allocated_books a=new allocated_books();
        int s=0;
        int sum=0;
        for(int i=0;i<arr.length;i++){
            sum=sum+arr[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(a.ispossible(arr,s,e,mid,m)==true){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
        int []arr={10,20,30,40};
        int m=2;
        allocated_books a=new allocated_books();
        a.allocate(arr, m);
        
    }
}