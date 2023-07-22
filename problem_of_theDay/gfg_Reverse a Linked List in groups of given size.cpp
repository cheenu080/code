
class Solution
{
	public:
	
	struct node *reverse (struct node *head, int k)
	
	{
		
        if(head==NULL){
            return NULL;
        }

        struct node *prev = NULL;
        struct node *next=NULL;
        struct node *curr=head;
        int cnt=0;
        
        while(curr!=NULL && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        
        if(next!=NULL){
            head->next = reverse(next,k);
        }
        
        return prev;
    }
    
};


-----------------------------------------------------
