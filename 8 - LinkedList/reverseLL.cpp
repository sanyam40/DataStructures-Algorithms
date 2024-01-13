/*

Leetcode q.206 -> https://leetcode.com/problems/reverse-linked-list/description/

*/

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

/* Insert At Head */
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

/* using iteration */
void reverse(Node* &head){
    Node* curr=head;
    Node* prev=NULL;

    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
}

/* USING RECURSION */
Node* rec(Node* prev,Node* curr){
    
    if(curr==NULL){
        return prev;
    }

    Node* next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;

    Node*ans=rec(prev,curr);
    return ans;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,5);

    printLinkedList(head);

    reverse(head);
    printLinkedList(head);

    Node* a=rec(NULL,head);

    printLinkedList(a);
}