class palindrome{


    void fun(String str ){
        str = str.toLowerCase();
        String rev = "";
 
        // Initializing a new boolean variable for the
        // answer
        boolean ans = false;
 
        for (int i = str.length() - 1; i >= 0; i--) {
            rev = rev + str.charAt(i);
        }
 
        // Checking if both the strings are equal
        if (str.equals(rev)) {
            ans = true;
        }
        System.out.println(ans);
    }

    void fun2(String str){
        str = str.toLowerCase();
        int i = 0, j = str.length() - 1;
 
        // While there are characters to compare
        while (i < j) {
 
            // If there is a mismatch
            if (str.charAt(i) != str.charAt(j))
            System.out.println("false");
 
            // Increment first pointer and
            // decrement the other
            i++;
            j--;
        }
 
        // Given string is a palindrome
        System.out.println("true");
    }
    
    




    public static void main(String[] args) {
        String str="sanyam";
        palindrome p=new palindrome();
        p.fun2(str);
    }
}