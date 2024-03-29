/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {   
        if(head == NULL)
            return false;
        unordered_set<ListNode *> visited;
        ListNode * curr = head;
        while(curr && curr->next)
        {
            if(visited.find(curr) != visited.end())
            {
                return true;
            }
            visited.insert(curr);
            curr = curr->next;
        }
        return false;
    }
};