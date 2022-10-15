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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next && n == 1) {
            delete head;
            return nullptr;
        }
        int count = 1;
        ListNode* temp = head, *prev = nullptr;
        while(temp->next) {
            count++;
            prev = temp;
            temp = temp->next;
        }
        if(n == 1) {
            prev->next = nullptr;
            delete temp;
            return head;
        }
        if(count == n) {
            ListNode* t = head;
            head = head->next;
            delete t;
            return head;
        }
        n = count - n;
        temp = head;
        while(n--) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
        
        
        // ListNode prehead(-1, head);
        // ListNode* prev = &prehead;
        // for (int i = 0; i < n; ++i) {
        //     head = head->next;
        // }
        // while (head) {
        //     head = head->next;
        //     prev = prev->next;
        // }
        // ListNode* rip = prev->next;
        // prev->next = prev->next->next;
        // delete rip;
        // return prehead.next;
    
    }
};