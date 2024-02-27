import java.util.*;

public class BinaryTree{
    static Scanner sc=new Scanner(System.in);
    static class Node{
        int data;
        Node right;
        Node left;

        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }

    static class Btree{
        static int index=-1;
        // METHOD TO BUILD TREE
        public Node buildTree(int nodes[]){
            index++;
            if(nodes[index]==-1){
                return null;
            }

            Node newNode=new Node(nodes[index]);
            newNode.left=buildTree(nodes);
            newNode.right=buildTree(nodes);

            return newNode;
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

// PREORDER TRAVERSAL ROOT->LEFT->RIGHT T.C : O(N)  -- DFS ( DEPTH FIRST SERACH )
    public static void preorder_traversal(Node root){
        if(root==null){
            return;
        }
        System.out.print(root.data+" ");
        preorder_traversal(root.left);
        preorder_traversal(root.right);
    }

// INEORDER TRAVERSAL LEFT->ROOT->RIGHT T.C : O(N) -- DFS ( DEPTH FIRST SERACH )
    public static void ineorder_traversal(Node root){
       if(root==null){
        return;
    }
    ineorder_traversal(root.left);
    System.out.print(root.data+" ");
    ineorder_traversal(root.right);
    }

// POSTEORDER TRAVERSAL LEFT->RIGHT->ROOT T.C : O(N) -- DFS ( DEPTH FIRST SERACH )
   public static void Postorder_traversal(Node root){
    if(root==null){
     return; 
    }
    Postorder_traversal(root.left);
    Postorder_traversal(root.right);
    System.out.print(root.data+" ");
    }

// LEVEL ORDER TRAVERSAL ( WE USE QUEUES ) T.C : O(N) -- BFS ( BREATH FIRST SERACH )
   public static void LevelOrder_traversal(Node root){
    if(root==null){
        return;
    }
    Queue<Node>q=new LinkedList<>();
    q.add(root);
    q.add(null);

    while(!q.isEmpty()){
        Node currNode=q.remove();
        if(currNode==null){
            System.out.println();
            if(q.isEmpty()){
                break;
            }
            else{
                q.add(null);
            }
        }
        else{
            System.out.print(currNode.data+" ");
            if(currNode.left!=null){
                q.add(currNode.left);
            }
            if(currNode.right!=null){
                q.add(currNode.right);
            }
        }
    }
}

// COUNT TOTAL NO OF NODES T.C : O(N)
   public static int countofNodes(Node root){
    if(root==null){
        return 0;
    }
    // COUNTING ALL THE LEFT NODES REC.
    int leftNodes=countofNodes(root.left);
    // COUNTING ALL THE RIGHT NODES REC.
    int rightNodes=countofNodes(root.right);

    // SUM OF LEFT + RIGHT AND ITSELF
    return leftNodes+rightNodes+1;
   }

// HEIGHT OF TREE T.C : O(N)
public static int heightof_tree(Node root){
    if(root==null){
        return 0;
    }
    // CALCULATING HEIGHT IN THE LEFT SUBTREE REC.
    int leftHeight=heightof_tree(root.left);
    // CALCULATING HEIGHT IN THE RIGHT SUBTREE REC.
    int rightHeight=heightof_tree(root.right);

    int height=Math.max(leftHeight, rightHeight)+1;

    return height;
   }   

// COUNT TOTAL NO OF NODES T.C : O(N)
   public static int SumofNodes(Node root){
    if(root==null){
        return 0;
    }
    // SUM OF ALL THE LEFT NODES REC.
    int leftSum=SumofNodes(root.left);
    // SUM OF ALL THE RIGHT NODES REC.
    int rightSum=SumofNodes(root.right);

    // SUM OF LEFT + RIGHT AND ITSELF
    return leftSum+rightSum+root.data;
   }

    public static void main(String[] args) {
        int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        Btree t1=new Btree();
        Node root=t1.buildTree(nodes);

        System.out.println("PREORDER TRAVERSAL");
        preorder_traversal(root);  
        System.out.println();

        System.out.println("INORDER TRAVERSAL");
        ineorder_traversal(root);
        System.out.println();

        System.out.println("POSTORDER TRAVERSAL");
        Postorder_traversal(root);
        System.out.println();

        System.out.println("LEVELORDER TRAVERSAL");
        LevelOrder_traversal(root);
        System.out.println();

        System.out.println(countofNodes(root));
        System.out.println(SumofNodes(root));
        System.out.println(heightof_tree(root));
    }
}