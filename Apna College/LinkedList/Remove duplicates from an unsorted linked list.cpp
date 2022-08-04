
// Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all 

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node *cur = head;
     Node *pre = NULL;
     
     set<int> m;
     while(cur){
         if(m.find(cur->data)!=m.end()){
             pre->next = cur->next;
             delete cur;
         }
         
         else{
             m.insert(cur->data);
             pre = cur;
         }
         cur = pre->next;  // if not found then we are deleting the cur node. So, pre->next
     }
     
     
     
     return head;
     
    }
};

