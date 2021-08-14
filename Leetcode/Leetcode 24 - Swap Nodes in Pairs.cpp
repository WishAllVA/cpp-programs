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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode* ptr = new ListNode(0);
        ptr->next = head;
        ListNode* ptr1 = ptr;
        while(head != nullptr && head->next != nullptr) {
            ptr->next = head->next;
            ptr = ptr->next;
            head->next = ptr->next;
            ptr->next = head;
            ptr = ptr->next;
            head = head->next;
        }
        ptr1 = ptr1->next;
        return ptr1;
    }
};