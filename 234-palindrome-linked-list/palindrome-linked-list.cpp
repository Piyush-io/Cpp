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
    bool isPalindrome(ListNode* head) 
    {
        vector<int> eles;
        ListNode * curr = head;
        while(curr != NULL)
        {
            eles.push_back(curr->val);
            curr = curr->next;
        }
        
        int n = eles.size();
        int i = 0;
        int j = n-1;
        while(i < j)
        {
            if(eles[i] != eles[j])
            {
                return false;
            }
            i++;
            j--;
        } 
        return true;
    }
};