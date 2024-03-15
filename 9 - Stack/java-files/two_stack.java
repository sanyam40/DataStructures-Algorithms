// IMPLEMENTATIONN OF TWO STACKS IN A SINGLE ARRAY 
// ONE STACK WILL IMPLEMENT FROM STARTING OF THE ARRAY
// SECOND STACK WILL IMPLEMENT FROM THE LAST OF THE ARRAY
// T.C. : O(1)

public class two_stack{
    int arr[];
    int size;
    int top1;
    int top2;
    

    public two_stack(int size){
        this.size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }

    public void push1(int num){
        // AT LEAST A EMPTY SPACE PRESENT
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            System.out.println("STACK OBERFLOW ");
        }
    }
    
    public void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            System.out.println("STACK OBERFLOW ");
        }
    }
    
    public int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else
        return-1;
    }

    public int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else
        return-1;
    }
}