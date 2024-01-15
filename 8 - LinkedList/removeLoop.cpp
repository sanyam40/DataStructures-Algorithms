void removeLoop(Node* head){

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

    // we will update the last node to null so it will not fall in loop again.
    Node* starting= slow; // starting point
    Node* temp=fast;
    while(temp->next!=starting){
        temp=temp->next;
    }
    temp->next=NULL;
}