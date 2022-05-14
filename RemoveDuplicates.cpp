Node *removeDuplicates(Node *head)
{
   	if(head==NULL||head->next==NULL)
    {
        return head;
    }
    
    Node *first = head;
    Node *sec = head->next;
    
        while(sec!=NULL)
        {	
              
            if(first->data==sec->data)
            {	
          
                first->next=sec->next;
                sec=sec->next;
            }
            else{
                
                first=first->next;
                sec=sec->next;
            }
        }
    	first->next=sec;
     
    
 return head;
    
}