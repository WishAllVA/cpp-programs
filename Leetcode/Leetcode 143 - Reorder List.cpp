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
    ListNode *cutFromMiddle(ListNode *head)
    {
        ListNode *ptr = head;
        int count = 0;
        while (ptr != nullptr)
        {
            count++;
            ptr = ptr->next;
        }
        count = (count + 1) / 2;
        ptr = head;
        ListNode *ptr2 = head;
        while (count--)
        {
            ptr = ptr->next;
            if (count == 1)
            {
                ptr2 = ptr;
            }
        }
        ptr2->next = nullptr;
        return ptr;
    }
    ListNode *reverse(ListNode *head)
    {
        if (!head)
            return nullptr;
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next2 = head->next;
        while (curr != nullptr)
        {
            curr->next = prev;
            prev = curr;
            curr = next2;
            if (next2 != nullptr)
                next2 = next2->next;
        }
        return prev;
    }

    ListNode *reorder(ListNode *head, ListNode *head2)
    {
        ListNode *head1 = head;
        ListNode *ptr1 = head->next;
        ListNode *ptr2 = head2->next;
        while (head2 != nullptr)
        {
            head1->next = head2;
            if (head2 != nullptr)
            {
                head2->next = ptr1;
                head1 = head2->next;
            }
            if (ptr1 != nullptr)
                ptr1 = ptr1->next;
            head2 = ptr2;
            if (ptr2 != nullptr)
                ptr2 = ptr2->next;
        }
        return head;
    }

    void reorderList(ListNode *head)
    {
        if (!head)
            return;
        if (!(head->next))
            return;
        ListNode *head2 = cutFromMiddle(head);
        head2 = reverse(head2);
        head = reorder(head, head2);
    }
};