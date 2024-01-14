/*

Leetcode q.234 : https://leetcode.com/problems/palindrome-linked-list/description/

*/

class Solution
{
public:
    ListNode *slowfast(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next != NULL)
        {
            fast = fast->next;
            if (fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;

        while (curr != NULL)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head->next == NULL)
        {
            return true; // for single element
        }
        // 1. Break in 2 parts
        // 2. 2nd ko reverse karo
        // 3. Compare both LL

        // Step 1
        ListNode *mid = slowfast(head);
        ListNode *head2 = mid->next;
        mid->next = NULL;

        // Step 2
        ListNode *headnew = reverseList(head2);

        // Step 3
        bool ans = false;
        while (head != NULL && headnew != NULL)
        {
            if (head->val == headnew->val)
            {
                ans = true;
                head = head->next;
                headnew = headnew->next;
            }
            else
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};