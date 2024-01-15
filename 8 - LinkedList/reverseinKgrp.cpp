/*

q.25 : https://leetcode.com/problems/reverse-nodes-in-k-group/

*/


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        // Step 1: Reverse k nodes
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextNode=NULL;
        int pos=0;
        while(curr!=NULL && pos<k){
            nextNode = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            pos++;
        }

        if (pos < k) {
            // Reverse the already reversed nodes back to their original order
            return reverseKGroup(prev, pos);
        }

        // Step 2: Calling recursion
        if(nextNode!=NULL){
            head->next =reverseKGroup(nextNode,k);
        }
        
        // Step 3
        return prev;        
    }
};