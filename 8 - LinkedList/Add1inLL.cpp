#include <iostream>
using namespace std;

/* BASIC STRUCTURE OF LINKEDLIST */
class Node{
public:
    int data;
    Node *next;

    Node(){
        data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    { // Corner Case
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

/* Printing LinkedList */
void printLinkedList(Node *head){
    if (head == NULL)
    {
        cout << "EMPTY" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node*head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void Addone(Node* &head){
    // Step 1: reverse
    // Step 2: add
    // Step 3: reverse
    head=reverse(head);

    int carry=1;
    Node* temp=head;
    while(temp->next!=NULL){
        int sum=temp->data+carry;
        int digit=sum%10;
        carry=sum/10;

        temp->data=digit;
        temp=temp->next;
        if(carry==0) break;
    }
    if(carry!=0){
        int sum=temp->data+carry;
        int digit=sum%10;
        carry=sum/10;

        temp->data=digit;
        if(carry!=0){
            Node* newNode=new Node(carry);
            temp->next=newNode;
        }
    }

    head=reverse(head);

}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,9);
    insertAtHead(head,tail,9);
    insertAtHead(head,tail,9);

    printLinkedList(head);

    Addone(head);

    printLinkedList(head);
 

}