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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head ->next == NULL)
            return head;
        
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = NULL;
        
        //Finding the middle element
        while(fast != NULL && fast->next != NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        temp -> next = NULL;
        
        ListNode *l1 = sortList(head);  // Left half LL
        ListNode *l2 = sortList(slow);  // Right half LL
        
        return MergeList(l1,l2);
    }
    
    ListNode* MergeList(ListNode *l1, ListNode *l2){
        ListNode *temp = new ListNode(0);
        ListNode *current = temp;
        while(l1 != NULL && l2 != NULL){
        if(l1->val <= l2->val){
            current->next = l1;
            l1 = l1->next;
        }
        else{
            current->next = l2;
            l2 = l2->next;
        }
            current = current->next;
        }
        if(l1){
            current->next = l1;
            // l1 = l1->next;
        }
        if(l2){
            current->next = l2;
            // l2 = l2->next;
            
        }    
        
    
    return temp->next;
    }
};