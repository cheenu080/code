
class Solution
{
public:
  // function
  struct Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     
     if(!head || !head->next) return head;
     
     unordered_map<int,int>m;
     struct Node *prev = NULL;
     struct Node *curr = head;
     
     while(curr)
     {
         m[curr->data]++;
         
         if(m[curr->data]>1)
         {
             prev->next = curr->next;
             
             curr->next = NULL;
             
             curr = prev->next;
         }
         else 
         {
            prev=curr;
            curr = curr->next;
         }
     }
     return head;
    }
  // code end
};

// driver code is present by default
