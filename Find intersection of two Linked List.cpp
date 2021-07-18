/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
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
        return head;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int counta = 0;
        int countb = 0;
        int countc = 0;
        ListNode *ptr = headA;
        while (ptr != nullptr)
        {
            counta++;
            ptr = ptr->next;
        }
        ptr = headB;
        while (ptr != nullptr)
        {
            countb++;
            ptr = ptr->next;
        }
        headB = reverse(headB);
        ptr = headA;
        while (ptr != nullptr)
        {
            countc++;
            ptr = ptr->next;
        }
        int ans = (counta - countb + countc) / 2;
        ptr = headA;
        while (ans--)
        {
            ptr = ptr->next;
        }
        return ptr;
    }
};