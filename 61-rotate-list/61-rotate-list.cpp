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
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
            return head;
        ListNode *cur=head;
        int c=1;
        while(cur->next && c++)
        {
cur=cur->next;
        }
        cur->next=head;
        k=k%c;
        k=c-k;
        while(k--)
            cur=cur->next;
        head=cur->next;
        cur->next=NULL;
        
        return head;
        
        
        
    }
};