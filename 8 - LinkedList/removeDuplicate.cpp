/*

Leetcode : https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

*/


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;

        ListNode* curr=head;
        
        while(curr!=NULL){
            if(curr->next!=NULL && curr->val==curr->next->val){
            // remove
            ListNode* nextNode=curr->next->next;
            curr->next=nextNode;
            }
            else{
            curr=curr->next;
        }
        }
        return head;
    }
};