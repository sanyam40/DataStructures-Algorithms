import java.util.*;

public class intersection{


    public void func(ArrayList<Integer>arr1,ArrayList<Integer>arr2){
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        int i=0,j=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1.get(i)==arr2.get(j)){
                numbers.add(arr1.get(i));
                i++;
                j++;
            }
            else if(arr1.get(i)<arr2.get(j)){
                i++;
            }
            else{
                j++;
            }
        }
         System.out.println(numbers);
       }
    public static void main(String[] args) {
        ArrayList<Integer>arr1=new ArrayList<Integer>();
        ArrayList<Integer>arr2=new ArrayList<Integer>();
        arr1.add(1);
        arr1.add(3);
        arr1.add(5);
        arr1.add(7);

        arr2.add(0);
        arr2.add(3);
        arr2.add(5);
        arr2.add(7);
        intersection i=new intersection();
        i.func(arr1, arr2);
    }
}