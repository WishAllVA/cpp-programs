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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *ptr = head;
        int count = 0;
        while (ptr != nullptr)
        {
            ptr = ptr->next;
            count++;
        }
        count = count - n - 1;
        if (count < 0)
            return head->next;
        ptr = head;
        while (count--)
        {
            ptr = ptr->next;
        }
        ptr->next = (ptr->next)->next;
        return head;
    }
};