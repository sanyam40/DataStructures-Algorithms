import java.util.*;

public class isvalid_parenthesis{

    static Boolean checkfun(String exp){
        Stack<Character>s1=new Stack<Character>();
        for(int i=0;i<exp.length();i++){

            Character ch=exp.charAt(i);

            // IF OPENING BREACKET PUSH IN STACK
            // IF CLOSING BRACKET POP

            if(ch=='(' || ch=='{' || ch=='['){
                s1.push(ch);
                continue;
            }
            else{
                // FOR CLOSING BRACKET
                if(!s1.empty()){
                    Character top=s1.peek();
                    if(ch==')' && top=='('  ||
                    ch=='}' && top=='{' ||
                    ch==']' && top=='['  ){
                        s1.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }  
            }

            if(s1.empty()){
                return true;
            }
        }
        return false;  
}
    public static void main(String[] args) {
        String exp="[])";
        System.out.println(checkfun(exp));

    }
}
