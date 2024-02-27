import java.util.*;

public class BinaryTree_2{
    static Scanner sc=new Scanner(System.in);
    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }

// BUILDING THE BINARY TREE THROUGH INPUT FROM THE USER RECURSIVELY
    static Node BuildTree(Node root){
        System.out.print("ENTER THE DATA : ");

        int data;
        data=sc.nextInt();
        System.out.println();
        root=new Node(data);
        
        if(data==-1){
            return null;
        }

        System.out.print("ENTER THE DATA FOR LEFT NODE OF "+data);
        System.out.println();
        root.left=BuildTree(root);

        System.out.print("ENTER THE DATA FOR RIGHT NODE OF "+data);
        System.out.println();
        root.right=BuildTree(root);

        return root;
    }

    static void levelOrderTraversal(Node root){
        if(root==null){
            return;
        }
        Queue<Node>q=new LinkedList<>();

        q.add(root);
        q.add(null);

        while(!q.isEmpty()){
            Node temp=q.remove();
            if(temp==null){
                System.out.println();
                if(!q.isEmpty()){
                    q.add(null);
                }
            }
            else{
                System.out.print(temp.data+" ");
            if(temp.left!=null){
                q.add(temp.left);
            }
            if(temp.right!=null){
                q.add(temp.right);
            }
            }
        }
    }

    public static void main(String[] args) {
        Node root=null;
        root=BinaryTree_2.BuildTree(root);
    
        BinaryTree_2.levelOrderTraversal(root);
    }
}