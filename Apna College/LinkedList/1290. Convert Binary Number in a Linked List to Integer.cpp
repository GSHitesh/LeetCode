// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

// Return the decimal value of the number in the linked list.

// The most significant bit is at the head of the linked list.
class Solution {
public:
   
    int getDecimalValue(ListNode* head) {
        int sum = 0;
       while(head){
           sum *= 2;
           // 1 0 1
        //    1
        //    1x2 + 0 = 2
        //    2*2 +1 = 5
        // Multiplying with the left value of the linked list which is MSB


           sum += head->val;
           head = head->next;
       }
        
        return sum;
    }
};