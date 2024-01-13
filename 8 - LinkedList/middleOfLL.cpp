/*

Leetcode q.876 : https://leetcode.com/problems/middle-of-the-linked-list/description/
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

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
    ListNode* middleNode(ListNode* head) {
        int len=length(head);
        ListNode* ans=NULL;

        int mid = len / 2 + 1;

        int count=1;
        ListNode* temp=head;
        while(count<mid){
            temp=temp->next;  
            count++;
        }
        ans=temp;
        return ans;      
    }
};