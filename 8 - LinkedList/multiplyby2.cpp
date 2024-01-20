/*

q.2816
https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/

*/


class Solution {
public:
    /* Last Node pe jaake multiplication perform karenge then bcoz of recursion ek ek step piche aake carry   add kar denge*/
    void solve(ListNode* head,int &carry){
        if(!head) return;
        solve(head->next,carry);

        int prod=head->val*2+carry;
        head->val=prod%10;
        carry=prod/10;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry=0;
        solve(head,carry);
        // if carry is there at last inset a node
        if(carry){
            ListNode* newNode=new ListNode(carry);
            newNode->next=head;
            head=newNode;
        }
        return head;
    }
};