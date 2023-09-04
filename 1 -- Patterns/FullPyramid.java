/* 

   *   
  ***
 *****
*******

*/
public class FullPyramid {
    public static void main(String[] args) {

        int n = 4;

        for(int row=0;row<n;row++){
            //space
            for(int col=0;col<n-row-1;col++){
                System.out.print(" ");
            }
            //stars
            for(int col=0;col<row+1;col++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
