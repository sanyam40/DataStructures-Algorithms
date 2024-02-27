import java.util.*;
public class 15_square_root{

    int root(int n){
        int s=0;
        int e=n;
        int mid=s+(e-s)/2;
        int ans=0;
        while(s<=e){
            if(mid*mid>n){
                e=mid-1;
            }
            else if(mid*mid<n){
                ans=mid;
                s=mid+1;
            }
            else if(mid*mid==n){
                return mid;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }

    double ans(int n,int precision,int tempresult){
        double factor = 1;
        double ans = tempresult;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}



    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int no=sc.nextInt();
        square_root s1=new square_root();
        int tempans=s1.root(no);
        double ans=s1.ans(no,3,tempans);
        System.out.println("ANS IS : "+ans);
    }
}