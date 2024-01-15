#include <iostream>
using namespace std;

/*

q.142 : https://leetcode.com/problems/linked-list-cycle-ii/description/

*/

/*

1.when slow==fast means loop is there
2.set slow=head
3.then dono ko ek ek se increase karo
4.phirse jab slow==fast then that point in starting

*/

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


Node* getStartingPoint(Node* &head){
    // check for loop
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
        }
        if(fast==slow){
            break;
        }
    }
    if(fast==NULL){
        return NULL;
    }
    // Means they meet
    slow=head;
    while(fast!=slow){
        slow=slow->next;
        fast=fast->next;
    }
    return slow; // starting point
}

int main(){

}