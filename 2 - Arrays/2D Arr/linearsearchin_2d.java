import java.util.*;

class twod_array{

    Boolean ispresent(int [][]arr,int target,int row,int column){
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                if(target==arr[i][j]){
                    return true;
                }
            }
        }
        return false;

    }
}
    
public class linearsearchin_2d{
public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        twod_array a=new twod_array();
        
        int[][] arr={{1,2,3,4},{5,6,7,8,9},{10,11,12,13}};
        if(a.ispresent(arr,7,3,4)==true){
            System.out.println("FOUND");

        }
    }
}