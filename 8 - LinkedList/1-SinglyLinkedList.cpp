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

/* Insert At Tail */
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    { // Corner Case
        head = newNode;
        tail = newNode;
    }
    else
    {

        Node *temp = head;

        // Method 1 : using head
        /* while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode; */

        // Method 2 : using tail only

        tail->next = newNode;
        tail = newNode;
    }
}

/* Length Of a Linked List */
int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

/* Insert At Specific Position */
void insertAtPosition(Node *&head, Node *&tail, int data, int location){
    Node *newNode = new Node(data);
    if (location == 1 || location < 1){
        insertAtHead(head, tail, data);
    }
    else if (location == length(head) || location>length(head)){
        insertAtTail(head, tail, data);
    }
    else{ // Method 2 : Using location usko -- karke kar skte while(location!=1)
        int count = 1;
        Node *temp = head;
        while (count < location - 1)
        {
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
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

int main(){
    Node *tail = NULL;
    Node *head = NULL;

    printLinkedList(head);

    insertAtHead(head, tail, 4);
    insertAtTail(head, tail, 8);
    insertAtPosition(head, tail, 9, 2);

    printLinkedList(head);

    delete tail;
    delete head;

    return 0;
}