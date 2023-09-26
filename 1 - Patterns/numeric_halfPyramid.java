/*

1
12
123
1234
12345

 */

public class numeric_halfPyramid {
    public static void main(String[] args) {
        
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < i + 1; j++) {
                System.out.print(j + 1); // Incremented value
            }
            System.out.println();
        }
    }
}
