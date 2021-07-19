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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *ptr1 = headA;
        int count = 0;
        while (ptr1 != nullptr)
        {
            ptr1 = ptr1->next;
            count++;
        }
        ptr1 = headB;
        while (ptr1 != nullptr)
        {
            ptr1 = ptr1->next;
            count--;
        }
        ListNode *ptr2 = headB;
        if (count > 0)
        {
            ptr1 = headA;
            ptr2 = headB;
        }
        else
        {
            ptr1 = headB;
            ptr2 = headA;
        }
        count = abs(count);
        while (count--)
        {
            ptr1 = ptr1->next;
        }
        while (ptr1 != nullptr && ptr2 != nullptr)
        {
            if (ptr1 == ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return nullptr;
    }
};