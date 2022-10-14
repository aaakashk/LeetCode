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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        if(!head->next) {
            delete temp;
            head = nullptr;
            return head;
        }
        int count = 1;
        while(temp->next) {
            count++;
            temp = temp->next;
        }
        int mid = count / 2;
        ListNode* t = head, *prev = nullptr;
        while(mid) {
            prev = t;
            t = t->next;
            mid--;
        }
        prev->next = t->next;
        delete t;
        return head;
    }
};