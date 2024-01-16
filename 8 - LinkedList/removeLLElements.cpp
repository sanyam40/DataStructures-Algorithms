/*

Leetcode q.203 : https://leetcode.com/problems/remove-linked-list-elements/description/

*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;

        ListNode* temp=head;
        
        while (temp->next != NULL) {
            if (temp->next->val == val) {
                ListNode* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            } else {
                temp = temp->next;
            }
        }

        if (head->val == val) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        return head;
    }
};