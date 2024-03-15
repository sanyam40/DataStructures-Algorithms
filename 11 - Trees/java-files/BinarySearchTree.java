/*

 A.LEFT SUBTREE NODES < ROOT
 B.RIGHT SUBTREE NODES > ROOT
 C.LEFT AND RIGHT SUBTREE ARE ALSO BST WITH NO DUPLICATES.


 WORST COMPLEXITY : O(N)
 */

public class BinarySearchTree{

    static class Node{
        int data;
        Node right;
        Node left;

        Node(int data){
            this.data=data;
            this.right=null;
            this.left=null;
        }
    }

// INSERTING NODE IN BST -> T.C : O(H)
    public static Node insert(Node root,int val){
        if(root==null){
            root=new Node(val);
            return root;
        }
        if(root.data>val){
            // left subtree
            root.left=insert(root.left, val);
        }
        else{
            // right subtree
            root.right=insert(root.right, val);
        }
        return root;
    }

// Inorder gives a sorted array in result
    public static void inorder_traversal(Node root){
        if(root==null){
            return;
        }
        inorder_traversal(root.left);
        System.out.print(root.data+" ");
        inorder_traversal(root.right);
    }

// SEARCH IN BST -> T.C : O(H)
    public static boolean search(Node root,int key){
        if(root==null){
            return false;
        }
        if(root.data>key){
            return search(root.left, key);
        }
        else if(root.data==key){
            return true;
        }
        else{
            return search(root.right, key);
        }
    } 
    
    public static Node delete(Node root,int val){
        if(root.data>val){
            root.left=delete(root.left, val);
        }
        else if(root.data<val){
            root.right=delete(root.right, val);
        }
        else{
            // root.data==val
            // case 1
            if(root.left==null && root.right==null){
                return null;
            }

            // case 2
            if(root.left==null){
                return root.left;
            }

            // case 3
            Node inorder=inordersuccessor(root.right);
            root.data=inorder.data;
            root.right=delete(root.right, inorder.data);
        }
        return root;
    }

// INORDER SUCCESSOR -> LEFT MOST IN RIGHT SUBTREE
    public static Node inordersuccessor(Node root){
        while(root.left!=null){
            root=root.left;
        }
        return root;
    }

// TO PRINT THE NODES LIES BETWEEN X AND Y.   
    public static void printinrange(Node root,int x,int y){
        if(root==null){
            return;
        }
        if(root.data>=x && root.data<=y){
            printinrange(root.left, x, y);
            System.out.print(root.data+" ");
            printinrange(root.right, x, y);
        }
        else if(root.data>=y){
            printinrange(root.left, x, y);
        }
        else{
            printinrange(root.right, x, y);
        }
    }

    public static void main(String[] args) {
        int values[]={5,1,3,4,2,7};
        Node root=null;

        for(int i=0;i<values.length;i++){
            root=insert(root, values[i]);
        }

        inorder_traversal(root);
        System.out.println(search(root, 22));

        delete(root, 2);
        inorder_traversal(root); 
        System.out.println();

        printinrange(root, 3, 7);
    }
}