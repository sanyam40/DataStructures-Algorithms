/*

  *
  **
  ***
  ****

 */

public class halfPyramid {

    public static void main(String[] args) {
        
        for(int row=0;row<5;row++){
            for(int j=0;j<row+1;j++){       // formula : row+1
                System.out.print("*");
            }
            System.out.println();
        }
    }  
}
