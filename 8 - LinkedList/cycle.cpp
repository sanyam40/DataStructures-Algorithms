/*

Leetcode q.141:https://leetcode.com/problems/linked-list-cycle/description/

*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        /// Approach 2 : Using Slow fast
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow){
                return true;
            }
        }
        return false;
        /* Approach 1 : Using Map
        map<ListNode*,bool>table;

        ListNode* temp=head;
        while(temp!=NULL){
            if(table[temp]==false){
                table[temp]=true;
            }
            else{
                return true;
            }
            temp=temp->next;
        }
        return false;  */
    }
};