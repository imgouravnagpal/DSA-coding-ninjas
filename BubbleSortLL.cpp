int length(Node* head)
{
    if(head==NULL) return 0;
    if(head->next==NULL) return 1;
    return 1+length(head->next);
}
Node *swap(Node *head)
{
    Node *temp=head;
    head = head->next;
    temp->next=head->next;
    head->next=temp;
    return head;
    
}
Node *bubbleSort(Node *head)
{
	Node* temp=head;
    Node* prev=NULL;
    int l =length(head);
    for(int i =0;i<l-1;i++)
    {	temp=head;
     	if(temp->data>temp->next->data&&temp->next!=NULL)
        {
            head=swap(head);
        }
           for(int j=0;j<l-i-1&&temp->next->next!=NULL;j++)
        {	
    
            if(temp->next->data>temp->next->next->data)
            {
                temp->next=swap(temp->next);
                
            }
               temp=temp->next;
              
               
    	}
    }
    return head;
}