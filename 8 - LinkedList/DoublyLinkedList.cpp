#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->next=NULL;
        this->prev=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail,int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        tail=newNode;
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        tail=newNode;
        head=newNode;
        return;
    }
    else if(head==tail){
        head->next=newNode;
        newNode->prev=head;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }  
}

void insertAtPost(Node* &head,Node* &tail,int pos,int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        tail=newNode;
        head=newNode;
        return;
    }
    int count=1;
    Node* temp=head;
    while(count<pos-1){count++;temp=temp->next;}

    Node* next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=next;
    next->prev=newNode;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout << endl;
}

/* Length Of a Linked List */
int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void printFromTail(Node *tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(head==NULL) return;
    
    if(position==1){
        // remove from head
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==length(head)){
        // remove from tail
        Node* temp=tail;
        temp->prev->next=NULL;
        tail=temp->prev;
        temp->prev=NULL;
        delete temp;
    }
    else{
        Node* temp=head;
        int count=1;
        while(count<position-1){
            count++;
            temp=temp->next;
        }
        
        Node* deleteToBe=temp->next;
        temp->next=deleteToBe->next;
        deleteToBe->next->prev = temp;

        deleteToBe->next=NULL;
        deleteToBe->prev=NULL;
        delete deleteToBe;
    }
}



int main(){
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,1);
    insertAtHead(head,tail,3);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,7);
    print(head);
    printFromTail(tail);

    insertAtPost(head,tail,2,5);
    print(head);
    printFromTail(tail);

    deleteNode(head,tail,2);
    cout << "Delete OP : "<<endl;
    print(head);
    printFromTail(tail);

}