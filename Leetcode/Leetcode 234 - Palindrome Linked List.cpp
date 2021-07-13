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
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (!head)
            return head;
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next1 = head->next;
        while (curr != nullptr)
        {
            curr->next = prev;
            prev = curr;
            curr = next1;
            if (next1 != nullptr)
                next1 = next1->next;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        if (!head)
            return false;
        ListNode *temp = head;
        bool isOdd = false;
        int count = 0;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        if (count % 2 == 1)
            isOdd = true;
        count = (count + 1) / 2;
        ListNode *head2 = head;
        while (count > 1)
        {
            head2 = head2->next;
            count--;
        }
        temp = head2;
        head2 = head2->next;
        temp->next = nullptr;
        ListNode *head1 = reverseList(head);
        if (isOdd)
            head1 = head1->next;
        while (head1 != nullptr || head2 != nullptr)
        {
            if (head1->val != head2->val)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};