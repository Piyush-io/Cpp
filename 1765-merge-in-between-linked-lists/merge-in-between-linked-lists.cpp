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
        ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
        {   
            ListNode* temp = list1;
            temp=list1;
            ListNode* remp = list1;
            while(b>0){
                temp = temp->next;
                b--;
            }
            remp = temp->next;
            temp = list1;
            while(a>1){
                temp = temp->next;
                a--;
            }
            temp->next =list2;
            ListNode* t = list2;
            while(t->next!=NULL){
                t = t->next;
            }
            t->next = remp;
            return list1;
    }
};