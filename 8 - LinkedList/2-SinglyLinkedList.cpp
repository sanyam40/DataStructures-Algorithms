#include<iostream>
using namespace std;

/* BASIC STRUCTURE OF LINKEDLIST */
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout << endl;
}

/* REMOVE FROM HEAD */
void deleteFromHead(Node* &head){
    if(head!=NULL){
        Node* temp=head->next;
        head->next=NULL;
        delete head;
        head=temp;
    }
}

/* REMOVE FROM TAIL */
void deleteFromTail(Node* &head){
    if(head!=NULL){
        if (head->next == NULL) {
            delete head;
            head = NULL;
        }
        else{
            Node* temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
        }
    }
}

/* REMOVE FROM POSITION */
void deleteFromPosition(Node* &head,int POSITION){
    if(head!=NULL){
        Node* temp=head;
        int count=1;
        while(count < POSITION - 1 && temp->next != NULL){
            count++;
            temp=temp->next;
        }
        Node* a= temp->next->next;
        delete temp->next;
        temp->next=a;        
    }
}

int main(){
    Node* head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);

    print(head);

    deleteFromHead(head);
    deleteFromTail(head);
    deleteFromPosition(head,2);

    print(head);
}