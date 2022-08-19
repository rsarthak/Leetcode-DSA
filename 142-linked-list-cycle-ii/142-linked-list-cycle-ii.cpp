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
    ListNode* intersect(ListNode* &head){
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                return slow;
            }     
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
    ListNode* intersection = intersect(head);
        ListNode* slow = head;
        while(slow != intersection){
            slow = slow->next;
            if(intersection!=NULL || intersection!=NULL)
            intersection = intersection->next;
        }
        return slow;
    }
};