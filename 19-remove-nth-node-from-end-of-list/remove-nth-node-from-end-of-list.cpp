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
        if (head == nullptr)
            return head;

        ListNode* curr = head;
        ListNode* slow = head;
        while (n-- && curr) {
            curr = curr->next;
            if (curr == nullptr && n > 0)
                return head;
        }
        if (curr == nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        while (curr->next) {
            slow = slow->next;
            curr = curr->next;
        }

        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;

        return head;
    }
};