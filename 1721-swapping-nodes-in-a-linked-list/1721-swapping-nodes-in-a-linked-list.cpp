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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 1;
        ListNode* temp = head;
        while(temp->next) {
            ++count;
            temp = temp->next;
        }
        if(count == 1) return head;
        int start = k - 1, end = count - k;
        ListNode* start_ptr = head, *end_ptr = head;
        while(start--) {
            start_ptr = start_ptr->next;
        }
        while(end--) end_ptr = end_ptr->next;
        swap(start_ptr->val, end_ptr->val);
        return head;
    }
};