/*

Leetcode q.876 : https://leetcode.com/problems/middle-of-the-linked-list/description/
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    }
    ListNode* slowfast(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){ // 2 step mai agge jayenge bcoz error ke chances honge 
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }    
        }  
        return slow;
    }
    ListNode* middleNode(ListNode* head) {
        return slowfast(head);

        /* int len=length(head);
        ListNode* ans=NULL;

        int mid = len / 2 + 1;

        int count=1;
        ListNode* temp=head;
        while(count<mid){
            temp=temp->next;  
            count++;
        }
        ans=temp;
        return ans;  */     
    }
};