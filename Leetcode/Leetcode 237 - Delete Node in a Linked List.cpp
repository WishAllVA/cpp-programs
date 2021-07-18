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
    void deleteNode(ListNode *node)
    {
        ListNode *ptr = node->next;
        while (ptr->next != nullptr)
        {
            node->val = ptr->val;
            node = ptr;
            ptr = ptr->next;
        }
        node->val = ptr->val;
        node->next = nullptr;
    }
};