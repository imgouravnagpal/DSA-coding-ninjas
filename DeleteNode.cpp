Node *deleteNode(Node *head, int pos)
{
    Node *temp=head;
    int count=0;
    if(pos==0)
    {
        Node *a = head;
        head=head->next;
        delete a;
        
        return head;
    }
	while(temp->next!=NULL&&count<pos-1)
    {
        count++;
        temp=temp->next;
    }
    if(temp->next!=NULL)
    {
        Node *a = temp->next;
        temp->next=a->next;
        delete a;
    }
    
    return head;
    
    }