/*
https://www.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1
*/

class Solution {
public:
    void linkdelete(struct Node* head, int M, int N) {
        if (!head) {
            return;
        }

        struct Node* temp = head;
        int count = 0;

        // Skip M nodes
        while (count < M-1 && temp != nullptr) {
            if(!temp) return;
            temp = temp->next;
            count++;
        }
        
        if(!temp) return;
        struct Node* MNode=temp;
        temp=MNode->next;

        // Delete N nodes using a for loop
        for (int i = 0; i < N && temp != nullptr; ++i) {
            if(!temp) break;
            
            struct Node* t=temp->next;
            delete temp;
            temp=t;
           
        }
        MNode->next=temp;
        
        // Recursively call linkdelete with the updated head
        linkdelete(temp, M, N);
    }
};